#include <stdio.h>
#include <string.h>
int f1(int pl)
{
	return ((pl ^ 0x3B) & 0x3F);
}
int f2(char *p, int pl)
{
	int res, i;

	for (i = 0, res = 0; i < pl; i++)
		res += p[i];
	return ((res ^ 0x4F) & 0x3F);
}
int f3(char *p, int pl)
{
	int res, i;

	for(res = 1, i = 0; i < pl; i++)
		res *= p[i];
	return ((res ^ 0x55) & 0x3F);
}
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

int f5(char *p, int pl)
{
	int i, res = 0;

	for(i = 0; i < pl; i++)
		res += p[i] * p[i];
	return ((res ^ 0xEF) & 0x3F);
}

int f6(char p)
{
	int i, res = 0;

	for(i = 0; i < p; i++)
		res = rand();
	return ((res ^ 0xE5) & 0x3F);
}
/**
  * main - define function
  * @void: describe argument
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
	res = f1(pl);
	key[0] = h[res];
	res = f2(p, pl);
	key[1] = h[res];
	res = f3(p, pl);
	key[2] = h[res];
	res = f4(p, pl);
	key[3] = h[res];
	res = f5(p, pl);
	key[4] = h[res];
	res = f6(p[0]);
	key[5] = h[res];
	key[6] = '\0';
	printf("%s\n", key);
	return(0);
}
