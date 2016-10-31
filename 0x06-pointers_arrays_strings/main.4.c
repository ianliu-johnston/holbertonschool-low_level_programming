#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}

/*
Write a function that searches a string for any of a set of bytes.

    Prototype: char *_strpbrk(char *s, char *accept);
    The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
    Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.

Sample Output:
llo, world

*/
