#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				if (i > j || j > k || i > k || i == j || i == k || k == j)
				{
				}
				else
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (j == '9' && i == '9' && k == '9')
					{
					  putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			if (k >= '9')
			{
				k = '0';
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

