#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */
int wordcounter(char *str, int location)
{
	char boolean, wc, wordlength;

	boolean = wc = wordlength = 0;
	for ( ; *str; str++)
	{
		if (*str == ' ' && *(str + 1) != ' ' && *(str + 1) != '\0' && boolean == 0)
		{
			boolean = 1;
			wc++;
			if (location > 0 && wc == location)
			{
				for (wordlength = 0; *(str + wordlength + 1) != '\0' && *(str + wordlength + 1) != ' '; wordlength++)
					;	
				return (wordlength);

			}
		}
		boolean = 0;
	}
	return (wc);
}
char **strtow(char *str)
{
	int i, j, wordcount, countchar;
	char **p;

	if (str == NULL)
		return (NULL);
	wordcount = wordcounter(str, -1);
	p = malloc(wordcount * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < wordcount; i++)
	{
		countchar = wordcounter(str, i + 1);
		printf("i: %d, countchar: %d\n", i, countchar);
		p[i] = malloc(countchar * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for ( ; i > 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < countchar; j++)
		{
			p[i][j] = str[6 + i + j];
		}
		p[i][j] = '\0';
	}
	return (p);
}
