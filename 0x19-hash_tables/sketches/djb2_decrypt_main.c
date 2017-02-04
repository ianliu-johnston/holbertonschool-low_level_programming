#include "hash_tables.h"
/*
 * decrypt_djb2 - decrypt djb2 values
 * @hash_val: encrypted string
 * Return: Decrypted string
 */
const unsigned char *decrypt_djb2(unsigned long int hash_val)
{
	char c, res;
	int i;
	unsigned char *decry;

	decry = (unsigned char *)"";
	c  = hash_val % 33;
	if (hash_val <= 0)
		return(decry);
	for (i = 1; i < 127; i++)
		if (i % 33 == c)
			res = i;
	printf("%c ", res);
	printf("\n----\n");
	decrypt_djb2((hash_val - i) / 33);
	return (decry);
}
/*
 * main - entry point
 * @ac: Argument count
 * @av: argument vectors (only 1)
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	const unsigned char *s, *decrypted;
	unsigned long int hashed;

	if (ac != 2)
	{
		printf("Usage: %s <key>\n", av[0]);
		return (1);
	}
	s = (unsigned char *)av[1];
	hashed = hash_djb2(s);
	printf("string: %s, hashed: %lu\n", s, hashed);
	decrypted = decrypt_djb2(hashed);
	printf("%s\n", decrypted);
	return (0);
}
