#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to new buffer with all arguments as 1 string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, count, totalCount;
	char *p;

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
	}
	p = (char *)malloc(count * sizeof(char) + ac + 1);
	for (i = 1; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, totalCount++)
			p[totalCount] = av[i][j];
		p[totalCount] = '\n';
		totalCount++;
	}
	return (p);
}

