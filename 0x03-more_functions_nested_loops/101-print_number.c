#include "holberton.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	int len, res, i, temp, expo;

	if (n == -2147483648) /*lower limit of int*/
		n += 1; /*decriment by one.*/
	res = n;
	expo = len =  1;

	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}
	temp = res;

	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

	for (i = 1; i < len; i++)
		expo *= 10;
	while (expo > 1)
	{
		_putchar((res / expo) % 10 + '0');
		expo /= 10;
	}
	if (n == -2147483647) /*lower limit of int*/
		_putchar('8');
	else
		_putchar(res % 10 + '0');
}
