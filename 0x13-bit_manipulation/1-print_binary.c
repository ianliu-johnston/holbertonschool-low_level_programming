#include "holberton.h"
#include <stdio.h>
/**
  * print_binary - converts a decimal number to binary
  * @n: integer to convert
  */
void print_binary(unsigned long int n)
{
	int i;

	for (i = sizeof(unsigned long int) + 1; i >= 0; i--)
		n & (1 << i) ? _putchar('1') : _putchar('0');
}
