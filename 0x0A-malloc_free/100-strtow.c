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
char **initializeArray(char *str)
{
	int wordcount, countchar, i;
	char **p;

	wordcount = wordcounter(str, -1);
	p = malloc(wordcount * sizeof(void *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i <= wordcount; ++i)
	{
		countchar = wordcounter(str, i + 1);
		printf("i: %d, countchar: %d, wordcount: %d\n", i, countchar, wordcount);
		p[i] = malloc(countchar * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for ( ; i > 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		printf("Reached end of large loop\n");
	}
	printf("Reached end of function\n");
	return (p);
}
char **strtow(char *str)
{
	int i, j, flag;
	char **p;

	flag = 0;
	if (str == NULL)
		return (NULL);
	p = initializeArray(str);
	printf("pop back to strtow, entering fill loop\n");
	for (i = 0, j = 0; *str; str++) 
	{
		if (*str != ' ')
		{
			if (flag == 0)
			{
				printf("flag triggered. j: %d\n", j);
				flag = 1;
				i++;
			}
			p[i][j] = *str; 
			j++;
			printf("i: %d, j: %d current letter: %c\n", i, j, *str);
		}
		else
		{
			j = flag = 0;
		}
	}
	printf("Reached end of function.\nYour pointer, sir:");
	for (i = 0; i <= 4; i++)
		printf("%9s, ", p[i]);
	return (p);
}
