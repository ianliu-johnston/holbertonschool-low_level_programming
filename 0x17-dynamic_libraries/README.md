#Holberton School - 0x17-dynamic_libraries
Compile dynamic Libraries.

## New commands / functions used:
1. ``mkdir libtobuild && cd libtobuild && cp ../files_to_find .`` - basic setup directory with all source.
2. ``cp $(grep -F -f files_to_find $(find ~/holbertonschool-low_level_programming/ -type f -name "*.c") | grep -v -e "0x08" -e "0x17" -e "putchar" -e "main" | cut -d : -f1) .`` - Copies all C files found into the current working directory, with any of the prototypes found in the file: files_to_find. Excludes any files found with specific patterns.
3. ``for f in *.c; do grep $(echo $f | cut -d '.' -f1 | cut -d '-' -f2)\( $f | sed 's|$|\;|'; done > holberton.h`` - Creates the header.
4. ``gcc -Wall -Werror -Wextra -pedantic -g -fPIC *.c -shared -o libholberton.so`` - Creates the dynamic library.

## Helpful Links
* [Difference between Static and Dynamic Libraries](https://www.youtube.com/watch?v=eW5he5uFBNM)
* Kerrisk, Michael. <em>The Linux Programming Interface: A Linux and UNIX System Programming Handbook.</em> San Francisco, CA: No Starch Press San Francisco, CA, 2010. Print. pp. 836-847.

## Description of Files
### Task 0:
<h6>libholberton.so</h6>
A dynamic library containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

<h6>holberton.h</h6>
Contains all the prototypes of the above functions.

### Task 1:
<h6>1-create_dymanic_lib.sh</h6>
Script that creates a dynamic library called liball.so from the current directory.

### Task 2:
A [blog post]() post describing the differences between static and dynamic libraries.

### Task 3:
<h6>100-operations.so</h6>
A dynamic library that contains C functions that can be called from Python

<h6>101-make_me_win.sh</h6>
Code Injection problem.
