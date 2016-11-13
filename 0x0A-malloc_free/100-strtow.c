#include "holberton.h"
#include <stdlib.h>
/**
 * wordcounter - counts words and the letters in them
 * @str: string to count
 * @pos: position of the word to count characters from
 * @firstchar: position of the first letter of the word
 * if pos = 0, count the number of chars in the word, else count number of words
 * Return: wordcount if pos == 0,
 * length of word if pos > 0,
 * position of word if pos > 0 && firstchar > 0
 */
int wordcounter(char *str, int pos, char firstchar)
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
			if (pos > 0 && pos == wordcount && firstchar > 0)
				return (i);
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
	int wc, wordlen, getfirstchar, len, i, j;
	char **p;

	for (len = 0; str[len]; len++)
		;
	if (len == 0)
		return (NULL);
	wc = wordcounter(str, 0, 0);
	p = malloc(wc * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0, wordlen = 0; i < wc; i++)
	{
		wordlen = wordcounter(str, i + 1, 0);
		p[i] = malloc(wordlen * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(p[i]);
			free(p);
			return (NULL);
		}
		/* initialize each element of the nested array with the word*/
		getfirstchar = wordcounter(str, i + 1, 1);
		for (j = 0; j < wordlen; j++)
			p[i][j] = str[getfirstchar + 1 + j];
		p[i][j] = '\0';
	}
	return (p);
}
