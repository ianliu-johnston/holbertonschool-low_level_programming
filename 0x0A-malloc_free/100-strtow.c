#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * wordcounter - counts words and the letters in them
 * @str: string to count
 * @pos: position of the word to count characters from
 * if pos = 0, count the number of chars in the word, else count number of words
 * Return: wordcount or charcount
 */
int wordcounter(char *str, int pos)
{
	int i, wordcount, charcount, flag;

	wordcount = charcount = 0;
	for (i = 0, flag = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && flag == 0)
		{
			wordcount++;
			flag = 1;
		}
		if (pos > 0 && pos == wordcount)
		{
			for (charcount = 0; str[i + charcount + 1] != ' '; charcount++)
				;
			return (charcount);
		}
		if (str[i] == ' ')
			flag = 0;
	}
	return (wordcount);
}
/**
 * strow - convert a string into a 2d array of words
 * @str: string to convert
 * Return: double pointer to 2d array
 */
char **strtow(char *str)
{
	int wc, wordlen, len, i, j;
	char **p;

	printf("%d\n", sp);
	for (len = 0; str[len]; len++)
		;
	if (len == 0)
		return (NULL);
	wc = wordcounter(str, 0);
	p = malloc(wc * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0, wordlen = 0; i < wc; i++)
	{
		wordlen = wordcounter(str, i + 1);
		p[i] = malloc(wordlen * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(p[i]);
			free(p);
			return (NULL);
		}
		/* initialize each element of the nested array with the word*/
		for (j = 0; j < wordlen; j++)
			p[i][j] = str[i + j + wordlen];
		p[i][j] = '\0';
	}
	return (p);
}
