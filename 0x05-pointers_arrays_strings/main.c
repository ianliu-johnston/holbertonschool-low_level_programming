#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "152";
        char *m = "346";
        char r[100];
        char *res;

        res = infinite_add(n, m, r, 3);
	printf("%s + %s = %s\n", n, m, res);
        return (0);
}
