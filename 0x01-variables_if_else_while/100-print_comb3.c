#include <stdio.h>
/**
 * main - print all unique combinations of two digit numbers, 
 * regardless of the order of the digits.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i > j || i == j)
			{
			}
			else
			{
				putchar(i);
				putchar(j);
				if (j == '9' && i == '9')
				{
			  		putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		if (j >= '9')
		{
			j = '0';
		}
		i++;
	}
	return (0);
}

