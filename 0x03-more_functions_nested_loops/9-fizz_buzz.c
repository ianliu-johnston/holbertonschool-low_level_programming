#include <stdio.h>
/**
 * main - Prints the numbers 1 - 100,
 *   instead of multiples of 3, print Fizz
 *   instead of multiples of 5, print Buzz
 *   for multiples of 3 and 5, print FizzBuzz.
(*
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
