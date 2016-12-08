#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 100);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 0);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 10001);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
