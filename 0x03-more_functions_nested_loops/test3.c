#include <stdio.h>
#include "holberton.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

int main(void)
{
	int n, len, res, i, exp;

	n = res = 189020;
	exp = len =  1;	
	
	/*get the number of digits*/
	while (res >= 10)
	{
		len++;
		res /= 10;
	}
	res = n; /*reset res to n*/
		/*end get length*/


	/*Calculate places*/
	for (i = 1; i < len; i++)
		exp *= 10;
	/*End calculate places*/


	/*main*/
	/*set negative to positive, print a negative sign.*/
	if (res < 0)
	{
		res *= -1;
		putchar('-');
	}


	/*print absolute value, digit by digit*/
	while(exp > 1)
	{
		printf("length: %d, beginning: %d, exponent: %d\n", len, n, exp); /*DEBUG*/
	
		putchar((res / exp) % 10 + '0');
		exp /= 10;
	}
	putchar(res % 10 + '0');
	putchar('\n');

	printf("length: %d, beginning: %d, exponent: %d, end: %d\n", len, n, exp, res);
	return (0);
}
