#Holberton School - 0x09-argc_argv
Introduction to arguments to the main function with ``char *argv[]`` and ``int argc``

## New commands / functions used:
``int main(int argc, char *argv[])``, ``argv[0]``

## Helpful Links
* [Arguments to main](http://publications.gbdirect.co.uk/c_book/chapter10/arguments_to_main.html)
* [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)

## Description of Files
<h6>0-whatsmyname.c</h6>
prints the program's path in the current directory and file name, followed by a new line.

<h6>1-args.c</h6>
prints the number of arguments passed into it, followed by a new line

<h6>2-args.c</h6>
prints all arguments it receives, one argument per line, ending with a new line.

<h6>3-mul.c</h6>
multiplies two user supplied numbers, and prints the result to stdout, followed by a new line. If exactly two arguments are not supplied or either number contains anything other than digits, prints "error" to stdout and returns 1.

<h6>4-add.c</h6>
adds any number of positive intgers, supplied by the user, and prints the result to stdout, followed by a new line. If any number contains anything other than digits,  prints "error" to stdout and returns 1.

<h6>100-change.c</h6>
prints the minimum number of coins to make change for an amount of money. Argument is supplied by the user. If exactly one argument is not supplied, prints "Error" and returns 1. USAGE: ``./change ###``, where ### is any positive integer.
