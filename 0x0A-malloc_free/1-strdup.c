#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	p = malloc(i * sizeof(char));
	for (j = 0; j < i; j++)
		p[j] = str[j];
	return (p);
}
