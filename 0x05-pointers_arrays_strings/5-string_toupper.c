#include "holberton.h"
/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @c: pointer to the string to convert
 * Return: the converted string.
 */
char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 'a' - 'A';
		c++;
	}
	return (c);
}
