#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    char *s1 = "betty ";
    char *s2 = "Holberton";
    s = str_concat(s1, s2);
    if (s == NULL)
    {
        printf("fail\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
/*
Expected output:
$~> ./a.out | cat -e 
Betty Holberton$
$~> 
*/
