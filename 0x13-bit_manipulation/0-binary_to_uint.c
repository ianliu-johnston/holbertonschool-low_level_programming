#include "holberton.h"
/**
  * _stoi - converts chars to ints
  * @c: char to convert
  * Return: converted int
  */
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
  * _strlen - calculates the length of the string
  * @s: input
  * Return: length of string
  */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
  * binary_to_uint - converts a string of 1's and 0's to a decimal number
  * @b: string to convert
  * Return: unsigned decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, tmp, expo;

	if (!b)
		return (0);
	result = tmp = 0;
	expo = 1;
	for (i = _strlen(b) - 1; b[i]; i--, expo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		tmp = _stoi(b[i]);
		result += tmp * expo;
	}
	return (result);
}

