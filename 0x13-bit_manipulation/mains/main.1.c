#include <stdio.h>
#include "holberton.h"
#include <limits.h>
/**
  * print_binary - converts a decimal number to binary
  * @n: integer to convert
void print_binary(unsigned long int n)
{
	unsigned long int expo;
	int i;

	if (n == 0)
		_putchar('0');
	for (expo = 1, i = 0; expo <= n; expo *= 2, i++)
		;
	i--;
	for (; i >= 0; i--)
		((n >> i) & 1) ? _putchar('1') : _putchar('0');
}
  */
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
	print_binary(98);
	printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
