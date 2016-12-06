# Low Level C Programming Exercises
Exercises to learn the C programming language at [Holberton School](https://holbertonschool.com). These exercises are designed to take the student from a complete novice to writing fully functional programs.
## Styling and Specifications
All C programs are complied with gcc 4.8 on Ubuntu 14.04 LTS. They comply with a [custom formatting checker](https://github.com/holbertonschool/Betty), to facilitate good coding style. Style is based off of [Linux Kernel coding style](http://git.kernel.org/cgit/linux/kernel/git/torvalds/linux.git/plain/Documentation/CodingStyle) All programs were written from the Bash shell, with Vim. Most standard library functions are not used. The main exceptions are generally: ``printf``, ``malloc``, ``free`` and  ``exit``. 
### Compilation
All errors must compile with the flags below, using the format below.
```
gcc -Wall -Werror -Wextra -pedantic main.##.c ##-name.c
```
All bash scripts require execution permissions:
```
chmod u+x file
```
### Directory Structure
Each directory is named according to the key concept shared by all exercises in the directory. They are numbered sequentially to provide a linear timeline, and build on the key concepts from all previous concepts. Project 0x10-printf is missing from the directory structure, because it is in a separate repository, with another contributor. Each directory contains its own README.md with a short description of the program or script. Additionally, there is a template file in the root of the directory, with the correct styling for all C programs. Also, there is a short c program, ``_putchar.c``, which replicates the functionality of the putchar function from the standard library.
### [setup.sh](setup.sh)
#### Description:
This file sets up the directory and files for an assignment based on the raw html from the assignment page. First, it creates the directory, then it creates all necessary files with their exact file name. Each file is populated with a template and the prototypes are changed to reflect what they are defined as in the header. The documentation reflects this change also. It creates a .gitignore, a putchar file for use when compiling, a header file that contains all prototypes and is include guarded and its own README.md with a list of all the assignment files. Finally, it creates and populates all main test functions in a subfolder called ``mains``.
#### Use:
1. Grab the raw HTML from the assignment page on the internet. ``CMD + u`` for mac will bring the HTML source up. ``CTL + u`` for Linux or Windows. Copy and paste it into a file with a name of your choosing.
2. Run with ``./setup.sh``, enter in the name of the HTML page, and the name of the header.
### Tools
* [betty style](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) - Style checker. Run with ``./betty-style.pl``
* [betty documentation](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) - Documentation style checker. Run with ``./betty-doc.pl``
* [valgrind](http://valgrind.org) - Check for memory leaks
* [radare2](https://github.com/radare/radare2) - CLI disassembler, debugger, and reverse-engineering
* [gdb](http://www.gnu.org/software/gdb/) - GNU debugging tool for reverse-engineering
* [vim](http://www.vim.org/) - The CLI text editor

## Links
See [links.md](links.md) for a list of links that are supplimental to the material.
## Feedback
I welcome any feedback on the code, as they aid in the ability to understand core concepts for low level programming in C. However, because they are primarily for my personal education, this repository is not open to contribution.
## Author
**Ian Xaun Liu-Johnston**
I have coded all of these exercises during my studies. The exercises themselves are part of the low level programming curriculum at [Holberton School](https://holbertonschool.com)
* [Twitter](https://twitter.com/Concativerse) - @Concativerse
* [Medium](https://medium.com/@Concativerse) - Technical articles on C programming.
* [Linkedin](https://www.linkedin.com/in/ian-liu-johnston-32a40a115)
* [Personal Website](http://ianxaunliu-johnston.com) - 
