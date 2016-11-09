#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containing s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1count, s2count, sizeBuffer, i;

	for (s1count = 0; s1[s1count]; s1count++)
		;
	for (s2count = 0; s2[s2count]; s2count++)
		;
	sizeBuffer = s1count + s2count + 1;
	p = (char *)malloc(sizeBuffer * sizeof(char));
	for (i = 0; i < sizeBuffer; i++)
		i < s1count ? (p[i] = s1[i]) : (p[i] = s2[i - s1count]);
	p[sizeBuffer] = '\0';
	return (p);
}
