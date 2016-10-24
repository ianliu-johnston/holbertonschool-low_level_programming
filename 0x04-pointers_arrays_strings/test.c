#include <stdio.h>

int main(void)
{
	char c;
	int n;
	int *p;
	long l;
	
	int m;
	int *q;
	m = 98;
	q = &m;

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);
	printf("size of pointer: %lu\n", sizeof(p));
	printf("Address of variable 'p': %p\n", &p);
	printf("Address of variable 'l': %p\n", &l);

	printf("Address of 'm': %p\n", &m);
	printf("Value of 'm': %d\n", m);
	printf("Address of 'q': %p\n", &q);	
	return (0);
}
