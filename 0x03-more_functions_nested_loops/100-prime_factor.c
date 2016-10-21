#include <stdio.h>
#include <math.h>
/**
 * _isupper - checks for uppercase.
 * @c: character to check.
 * Return: 1 if c is uppercase, otherwise return 0.
 */
int main(void)
{
	long i;
	long num = 612852475143;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%li\n", num);
	return (0);
}
