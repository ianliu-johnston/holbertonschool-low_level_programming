#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	_putchar(_abs((n % 10)) + '0');
	return (_abs(n % 10));
}
