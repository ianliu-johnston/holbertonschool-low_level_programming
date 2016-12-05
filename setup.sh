#!/bin/bash
echo "Enter the file name of your HTML page."
read INPUT
mkdir $(grep Directory: $INPUT | head -1 | cut -d \> -f3 | cut -d \< -f1)
cp $INPUT $(grep Directory: $INPUT | head -1 | cut -d \> -f3 | cut -d \< -f1)
cd $(grep Directory: $INPUT | head -1 | cut -d \> -f3 | cut -d \< -f1)
touch $(grep File: $INPUT | cut -d \> -f3 | cut -d \< -f1)
ln -s ~/Betty/betty-doc.pl _betty-s
ln -s ~/Betty/betty-style.pl _betty-d
grep Prototype: $INPUT | cut -d \> -f3 | cut -d \< -f1 >> holberton.h
cp ../_putchar.c .
find . -type f -name "*.c" -empty -exec cp ../template '{}' \;
cp ../0x00-hello_world/README.md .
find . -type f -name "*.c" -exec sed -i 's/dog/holberton/g' '{}' \;
mkdir mains
cd mains/
mv ../$INPUT .
export TOTAL=$(grep -n -e "<pre><code>" -e "</code></pre>" $INPUT | cut -d : -f 1 | grep -n "" | grep "[1,3,5,7,9]:" | cut -d : -f2 | sed 's/^/export A=/g' | grep -n "" | tail -1 | cut -d : -f1)
for ((i = 1; i <= $TOTAL; i++ ))
do
	ITER=$(($i*2))
	START=$( grep -m$ITER -n -e "<pre><code>" -e "</code></pre>" $INPUT | tail -2 | cut -d : -f 1 | grep -n "" | grep "[1,3,5,7,9]:" | cut -d : -f2 )
	END=$( grep -m$ITER -n -e "<pre><code>" -e "</code></pre>" $INPUT | tail -2 | cut -d : -f 1 | grep -n "" | grep -v "[1,3,5,7,9]:" | cut -d : -f2 )
	tail -n +$START $INPUT | head -n $(($END-$START)) | grep -v "@ubuntu" | sed 's/\&amp;/\&/g;s/&lt;/</g;s/&gt;/>/g;s/&quot;/"/g' | tac | sed '1,/}/d' | tac | sed '$s/$/\n}/' > main.$(($i-1)).c
done
mv $INPUT ../
cd ..
rm ../$INPUT
