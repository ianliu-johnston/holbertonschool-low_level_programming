# Holberton School - 0x00-hello_world
Compiling very simple programs with gcc. Learning the steps of compilation.
## New commands / functions used:
``gcc, printf, puts, putchar``
## Helpful Links
* [Linux Torvalds on C++](http://harmful.cat-v.org/software/c++/linus)
* [10 reasons C is the still best](http://www.woohooitsbacon.com/10-reasons-why-c-is-still-the-best-programming-language/)
* [Who is Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
* [Brian Kernighan on C](https://www.youtube.com/watch?v=de2Hsvxaf8M)
* [Why C programming is awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
* [Learning to Program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
* [Learning to Program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
* [Understanding the C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)

## Description of Files
<h6>0-preprocessor</h6>
Script that runs a C file through the preprocessor and saves the result into another file.
<h6>1-compiler</h6>
Script that generates the assembly code of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .s instead of .c. Example: if the C file is main.c, the output file should be main.s
<h6>2-assembler</h6>
Script that compiles a C file but does not link. The C file name will be saved in the variable $CFILE The output file should be named the same as the C file, but with the extension .o instead of .c. Example: if the C file is main.c, the output file should be main.o
<h6>3-name</h6>
Script that compiles a C file and creates an executable named cisfun. The C file name will be saved in the variable $CFILE.
<h6>4-puts.c</h6>
Write a C program that prints exactly ``Programming is like building a multilingual puzzle``, followed by a new line.


Use the function puts. You are not allowed to use printf. Your program should end with the value 0.
<h6>5-printf.c</h6>
Write a C program that prints exactly ``with proper grammar, but the outcome is a piece of art,``, followed by a new line.


Use the function printf. You are not allowed to use the function puts. Your program should return 0. Your program should compile without warning when using the -Wall gcc option
<h6>6-size.c</h6>
Write a C program that prints the size of various types on the computer it is compiled and run on.


Warnings are allowed. Your program should return 0. You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option.
