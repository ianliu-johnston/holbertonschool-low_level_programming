#include <stdio.h>
#include <string.h>

/**
 * check_password - Check that a given password is correct
 *
 * @pwd: The password to be checked
 *
 * Return: 1 on success, 0 on failure
 */
int check_password(char *pwd)
{
	unsigned int xor;
	unsigned char i;
	unsigned char mask;

	if (strlen(pwd) != 4)
	{
		return (0);
	}
	xor = 0x046c6f48;
	/* ./a.out `printf "Hol\x04"` */
	mask = 0xff;
	for (i = 0; i < 4; i++)
	{
		/* printf("Comparing %x w %x\n", pwd[i], ((xor >> (i * 8)) & mask));*/
		if ((unsigned char)(pwd[i]) != ((xor >> (i * 8)) & mask))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Entry point
 *
 * @ac: Arguments counter
 * @av: Arguments array
 *
 * Return: 0 on success, error code otherwise
 */
int main(int ac, char **av)
{
	int ret;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s password\n", av[0]);
		return (1);
	}
	ret = check_password(av[1]);
	if (ret == 1)
	{
		printf("Congratulations!\n");
	}
	else
	{
		printf("ko\n");
		return (1);
	}
	return (0);
}
