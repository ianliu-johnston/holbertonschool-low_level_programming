#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, last);
	}
	else if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else
	{
		printf("is %d is %d\n", n, 0);
	}
	return (0);

}
