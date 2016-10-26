#include "holberton.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted integer.
 */
int _atoi(char *s)
{
	short boolean;
	int i, j, minus, result, expo;
	char temp;

	i = j = minus = result = boolean = 0;
	minus = 1;
	expo = 10;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= expo;
			if (expo == 10)
				result += (s[i] - '0');
			else
				result -= (s[i] - '0');
			boolean = 1;
		}
		i++;
		if ((s[i] < '0' || s[i] > '9') && boolean == 1)
			break;
	}
	result *= minus;
	return (result);
}
