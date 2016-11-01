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

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}

/*
Write a function that locates a substring.

    Prototype: char *_strstr(char *haystack, char *needle);
    The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
    Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

FYI: The standard library provides a similar function: strstr. Run man strstr to learn more.

SAMPLE OUTPUT:
world
*/
