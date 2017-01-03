#!/bin/bash
if [[ -z $1 ]]; then
	echo "Usage: ./setup.sh <html_file>"
	exit 1
fi
if [[ ! -r $1 ]]; then
	echo "File does not exist or is unreadable"
	exit 1
fi
INPUT=$1
HEADER=$(grep ".h&quot;" $INPUT | head -1 | cut -d ';' -f2 | cut -d '.' -f1)
DIR=$(grep Directory: $INPUT | head -1 | cut -d \> -f3 | cut -d \< -f1)
mkdir $DIR
cp $INPUT $DIR
cd $DIR
echo Checking to see if Betty checks is in the home directory
ls ~/Betty/
if [[ $? == 0 ]]; then
	echo Found Betty checks. Making symbolic links. Run with ./_betty-s *.c or ./_betty-d *.c
	ln -s ~/Betty/betty-doc.pl _betty-d
	ln -s ~/Betty/betty-style.pl _betty-s
fi
echo -e "a.out\n*.swp\n~*\n_betty-s\n_betty-d\n_putchar.c\n" >> .gitignore
echo -e "#include <unistd.h>\nint _putchar(char c)\n{\n\treturn (write(1, &c, 1));\n}\n" > _putchar.c
#Create the files
touch $(grep File: $INPUT | cut -d \> -f3 | cut -d \< -f1)
echo -e "#include \"dog.h\"\n/**\n  * main - define function\n  * @void: describe argument\n  * Return: 0 on success\n  */\nint main(void)\n{\n\treturn (0);\n}" >> template
find . -type f -name "*.c" -empty -exec cp template '{}' \;
rm template
#Create the header
grep Prototype: $INPUT | cut -d \> -f3 | cut -d \< -f1 >> $HEADER.h
find . -type f -name "*.c" -exec sed -i "s/dog/$HEADER/g" '{}' \;
I=0
while read c; do
	I=$(($I+1))	
	PROTO=$(echo $c | rev | cut -c 2- | rev)
	NAME=$(echo $c | cut -d '(' -f 1 | rev | cut -d ' ' -f1 | rev)
	sed -i "s/int main(void)/$PROTO/g" $(ls -1 | grep "[0-9]-" | sort -h | grep -n "" | grep "$I:" | cut -d : -f2)
	sed -i "s/main - /$NAME - /g" $(ls -1 | grep "[0-9]-" | sort -h | grep -n "" | grep "$I:" | cut -d : -f2)
done<$HEADER.h
echo "#define HEADER_H" | cat - $HEADER.h > $HEADER.h.tmp
echo -e "#ifndef HEADER_H\n" | cat - $HEADER.h.tmp > $HEADER.h
echo "int _putchar(char c);" >> $HEADER.h
echo "#endif" >> $HEADER.h
rm $HEADER.h.tmp
#README.md
echo "#Holberton School - "$(grep Directory: $INPUT | head -1 | cut -d \> -f3 | cut -d \< -f1) > README.md
echo "Description" >> README.md
echo "## New commands / functions used:" >> README.md
echo "\`\`gcc\`\`" >> README.md
echo "## Helpful Links" >> README.md
A=$(grep -n "<h2>" $INPUT | grep -A1 "Readme" | cut -d : -f 1 | head -1)
B=$(grep -n "<h2>" $INPUT | grep -A1 "Readme" | cut -d : -f 1 | tail -1)
tail -n +$A $INPUT | head -n $(($B-$A)) | grep "<a href=" | sed 's/<a href=\"/\n/g' | grep "http"| cut -d \" -f1 | sed 's/^/* [link](/;s/$/)/' >> README.md
echo "" >> README.md
echo "## Description of Files" >> README.md
head -8 README.md > README.md.tmp
ls -1 | grep "[0-9]-" | sort -h | sed 's/^/<h6>/g;s/$/<\/h6>\n/g' >> README.md.tmp
mv README.md.tmp README.md
#MAINS
mkdir mains
cd mains/
mv ../$INPUT .
export TOTAL=$(grep -c "<pre><code>" $INPUT)
for ((i = 1; i <= $TOTAL; i++ ))
do
	ITER=$(($i*2))
	START=$( grep -m$ITER -n -e "<pre><code>" -e "</code></pre>" $INPUT | tail -2 | cut -d : -f 1 | grep -n "" | grep "[1,3,5,7,9]:" | cut -d : -f2 )
	END=$( grep -m$ITER -n -e "<pre><code>" -e "</code></pre>" $INPUT | tail -2 | cut -d : -f 1 | grep -n "" | grep -v "[1,3,5,7,9]:" | cut -d : -f2 )
	tail -n +$START $INPUT | head -n $(($END-$START)) | grep -v "@ubuntu" | sed "s/\&amp;/\&/g;s/&lt;/</g;s/&gt;/>/g;s/&quot;/\"/g;s/&#39;/'/g" | tac | sed '1,/}/d' | tac | sed '$s/$/\n}/' > main.$(($i-1)).c
	head -1 main.$(($i-1)).c | grep "#include"
	if [ $? -eq 1 ]; then
		NUM=$(($(grep -n -m1 '#include' main.0.c | cut -d : -f1) - 1))
		sed -i "1s/^/\/** /;2,$(echo $NUM)s/^/  * /g;$(($(echo $NUM)+1))i\  **\/" main.$(($i-1)).c
	fi
done
ln -s ../$HEADER.h $HEADER.h
mv $INPUT ../
cd ..
find . -depth -type f -empty -exec rm '{}' \;
rm ../$INPUT
