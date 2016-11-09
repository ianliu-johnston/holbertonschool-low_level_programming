#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */
int *lengthchecks(char *str)
{
	int i, innernest, outernest, boolean;
	int res[2] = {0,0};
	int *results;

	results = res;
	i = boolean = innernest = outernest = 0;
	for (i = 0, innernest = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ' || str[i] == '\t') && boolean == 0)
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				outernest++;
			boolean = 1;
		}
		else
		{
			boolean = 0;
			innernest++;
		}
/*printf("str[%d]: %c, boolean: %d, innernest: %d, outernest: %d\n", i, str[i], boolean, innernest, outernest);*/
	}
	results[0] = innernest;
	results[1] = outernest;
	return (results);
}
char **strtow(char *str)
{
	char **p;
	int i, outer, inner;
	int *checks;

	checks = lengthchecks(str);
	outer = checks[0];
	inner = checks[1];
	printf("outer: %d, inner: %d\n", outer, inner);
	p = (char **)malloc(inner * sizeof(char *) + outer + 1);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			p[i + 1] = '\n';	
		if (str[i] != ' ')
			p[i] = str[i];
	}
	return (p);
}
