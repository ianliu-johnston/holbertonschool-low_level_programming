#include "holberton.h"
/**
 * print_alphabet - prints the English alphabet, from a-z
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
/**
  * print_abc_10x - repeats the print_alphabet 10 times.
  * Return: Nothing.
  */
void print_abc_10x(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		print_alphabet();
}
