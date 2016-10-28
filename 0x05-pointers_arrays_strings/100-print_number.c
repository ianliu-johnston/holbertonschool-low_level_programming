#include "holberton.h"
#include <stdio.h>
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	int res, temp, expo;

	res = n * -1;
	expo = 1;
/*Check negatives*/
	if (res < 0)
		_putchar('-');

/*Initialize exponent variable*/
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
		printf("%d, %d\n", res, temp);
	}
/*Main */
	while (expo >= 1)
	{
		printf("Main while: %d\n", (((res / expo) * -1) % 10 + '0'));
		_putchar(((res / expo) * -1) % 10 - '0');
		expo /= 10;
	}
}
