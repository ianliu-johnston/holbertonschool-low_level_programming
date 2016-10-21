#include "holberton.h"
/**
 * more_numbers - prints the range 0-14 ten times.
 */
void more_numbers(void)
{
	int i, j;

	i = j = 0;
	while (i < 10)
	{
		while (j <= 14)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			++j;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
