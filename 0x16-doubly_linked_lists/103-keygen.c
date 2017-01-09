#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * f2_f3 - copied from server
  * @p: argv[1]
  * @pl: length of argv[1]
  * @flag: determine if f2 or f3
  * Return: element of key array.
  */
int f2_f3(char *p, int pl, char flag)
{
	int res, i;

	res = flag == 0 ? 0 : 1;
	for (i = 0; i < pl; i++)
	{
		if (flag == 0)
			res += p[i];
		else
			res *= p[i];
	}
	return ((res ^ (flag == 0 ? 0x4F : 0x55)) & 0x3F);
}
/**
  * f4 - copied from server
  * @p: argv[1]
  * @pl: length of argv[1]
  * Return: element of key array.
  */
int f4(char *p, int pl)
{
	int i;
	int res = p[0];

	for (i = 0; i < pl; i++)
		if (p[i] > res)
			res = p[i];
	srand(res ^ 0xE);
	return (rand() & 0x3F);
}
/**
  * f5 - copied from server
  * @p: argv[1]
  * @pl: length of argv[1]
  * Return: element of key array.
  */
int f5(char *p, int pl)
{
	int i, res = 0;

	for (i = 0; i < pl; i++)
		res += p[i] * p[i];
	return ((res ^ 0xEF) & 0x3F);
}
/**
  * f6 - copied from server
  * @p: argv[1]
  * Return: element of key array.
  */
int f6(char p)
{
	int i, res = 0;

	for (i = 0; i < p; i++)
		res = rand();
	return ((res ^ 0xE5) & 0x3F);
}
/**
  * main - generates a key, mostly copied from server.
  * @ac: argument count
  * @av: argument vectors
  * Return: 0 on success
  */
int main(int ac, char *av[])
{
	char *p;
	char h[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7];
	int pl, res;

	if (ac != 2)
		return (-1);
	p = av[1];
	pl = strlen(p);
	res = ((pl ^ 0x3B) & 0x3F);
	key[0] = h[res];
	res = f2_f3(p, pl, 0);
	key[1] = h[res];
	res = f2_f3(p, pl, 1);
	key[2] = h[res];
	res = f4(p, pl);
	key[3] = h[res];
	res = f5(p, pl);
	key[4] = h[res];
	res = f6(p[0]);
	key[5] = h[res];
	key[6] = '\0';
	printf("%s\n", key);
	return (0);
}
