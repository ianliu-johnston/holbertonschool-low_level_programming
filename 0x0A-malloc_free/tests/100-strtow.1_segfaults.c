#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - splits a string into words
 * @str: pointer to string
 * Return: double pointer to array of pointers
 */
char **strtow(char *str)
{
	char boolean;
	int i, j, len, wordsize;
	char **p, **output;

	for (len = 0; *(str + len); len++)
		;
	i = boolean = wordsize = 0;
	p = (char **)malloc(len * sizeof(str));
	if (p == NULL)
		return (NULL);
	while (i < len && str[i])
	{
		for (j = 0; str[i + j] == ' ' && boolean == 0; j++)
		{
			wordsize = 0;
			boolean = 1;
/*			printf("i: %d, len: %d, wordsize: %d\n", i, len, wordsize);*/
		}
		i += j;
		boolean = 0;
		p[i] = (char *)malloc(wordsize * sizeof(char));
		for (j = 0; str[i + j] != ' ' && str[i + j]; j++, wordsize++)
		{
			p[i][j] = str[i + j];
/*			printf("p[i][j] = %c, current char: %c\n", p[i][j], str[i + j]);*/
		}
		i += j;
		i++;
	}
	for (i = 0, j = 0; i < len; i++)
	{
		if (p[i] != NULL)
		{
			p[j] = p[i];
			j++;
		}
	}
	printf("%d\n", j);
	return (p);
	/*"      Holberton School         #cisfun      "*/
	/*	if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;*/
}
