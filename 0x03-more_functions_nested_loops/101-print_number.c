#include "holberton.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	int len, res, i, temp, exp;

	res = n;
	exp = len =  1;

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
		exp *= 10;
	
	while(exp > 1)
	{
		_putchar((res / exp) % 10 + '0');
		exp /= 10;
	}
	_putchar(res % 10 + '0');
	_putchar('\n');
}
