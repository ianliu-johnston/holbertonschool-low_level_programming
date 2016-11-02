#include <stdio.h>
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (is_prime_number(n - 1) % n == 0)
		return (1);
	return (0);
}
