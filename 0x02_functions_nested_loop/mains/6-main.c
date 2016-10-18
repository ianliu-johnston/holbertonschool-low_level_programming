#include <stdio.h>
/**
 * main - basic function checks
 *
 * Return: 0 on success.
 */
int _abs(int);

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
