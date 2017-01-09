#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f1(int pl)
{
	return ((pl ^ 0x3B) & 0x3F);
}

int f2(char *p, int pl)
{
	int res;
	int i;

	res = 0;
	for (i = 0; i < pl; i++)
	{
		res += p[i];
	}
	return ((res ^ 0x4F) & 0x3F);
}

int f3(char *p, int pl)
{
	int res;
	int i;

	res = 1;
	for(i = 0; i < pl; i++)
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
	int i;
	int res = 0;

	for(i = 0; i < pl; i++)
	{
		res += p[i] * p[i];
	}
	return ((res ^ 0xEF) & 0x3F);
}

int f6(char p)
{
	int i;
	int res = 0;

	for(i = 0; i < p; i++)
		res = rand();
	return ((res ^ 0xE5) & 0x3F);
}

void segf(void)
{
	int *p;

	p = NULL;
	*p = -1;
	exit(1);
}

int main(int ac, char **av)
{
	char *p;
	char *k;
	char h[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	int pl;
	int res;

	if (ac != 3) segf();

	p = av[1];
	k = av[2];
	if (strlen(k) != 6) segf();

	pl = strlen(p);
	res = f1(pl);
	if (k[0] != h[res]) segf();

	res = f2(p, pl);
	if (k[1] != h[res]) segf();

	res = f3(p, pl);
	if (k[2] != h[res]) segf();

	res = f4(p, pl);
	if (k[3] != h[res]) segf();

	res = f5(p, pl);
	if (k[4] != h[res]) segf();

	res = f6(p[0]);
	if (k[5] != h[res]) segf();

	printf("Congrats!\n");

	return (1);
}
