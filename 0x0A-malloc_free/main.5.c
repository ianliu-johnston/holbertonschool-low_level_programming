#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
/*
 julien@ubuntu:~/0x0a. malloc, free$ ./args I will "show you" how great I am
 ./args
 I
 will
 show you
 how
 great
 I
 am
 */
