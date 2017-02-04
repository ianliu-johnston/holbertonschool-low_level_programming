#include "hash_tables.h"

int main(int ac, char *av[])
{
	const unsigned char *s;

	if (ac != 2)
	{
		printf("Usage: %s <key>\n", av[0];
		return (1);
	}
	s = (const unsigned char *)av[1];
	printf("%lu\n", hash_djb2(s));
	return(0);
}
