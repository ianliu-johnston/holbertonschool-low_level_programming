#include <stdio.h>
/**
  * main - print a table of the first 178 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long ia, ib, ja, jb, ka, kb, carry;
	unsigned long amount;

	count = 0;
	i = 0;
	j = 1;
	amount = 10000000000000000000;/*10^18*/
	for (count = 1; count <= 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%d %lu\n", count + 1, k);
	}
	ia = i / amount;
	ib = i % amount;
	ja = j / amount;
	jb = j % amount;
	while (count <= 178)
	{
		carry = (ib + jb) / amount;
		ka = (ia + ja) + carry;
		kb = (ib + jb ) - carry * amount;
		ia = ja;
		ib = jb;
		ja = ka;
		jb = kb;
		printf("%d %lu%018lu\n", count + 1, ka, kb);
		count++;
	}
	printf("%lu018", ka);
	return (0);
}
