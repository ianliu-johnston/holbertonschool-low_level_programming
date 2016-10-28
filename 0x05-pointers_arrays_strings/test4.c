#include "holberton.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	long res, temp, expo;

	res = n;
	expo = 1;
/*Check negatives*/
	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}

/*Initialize exponent variable*/
	temp = res;
	while (temp >= 10)
	{
		expo *= 10;
		temp /= 10;
	}
/*Main */
	while (expo >= 1)
	{
		_putchar((res / expo) % 10 + '0');
		expo /= 10;
	}
}
