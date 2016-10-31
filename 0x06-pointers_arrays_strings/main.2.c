#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "heo";
    char *f;

    f = _strchr(s, 'l');
    printf("%s\n", f);
    return (0);
}

/*
Write a function that locates a character in a string.

    Prototype: char *_strchr(char *s, char c);
    Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.

Sample output:

llo

*/
