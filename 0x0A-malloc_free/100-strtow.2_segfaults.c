#include <stdlib.h>
#include <stdio.h>
/**
 * wordcounter - counts the number of words and/or the length of the word
 * @str: pointer to the string
 * @location: where the word is in the string
 * Return: word count or letter count
 */
int wordcounter(char *str, int location)
{
	char boolean, wc, wordlength;

	printf("\t\tEntered wordcounter loop at word # %d\n", location);
	boolean = wc = wordlength = 0;
	while (*str)
	{
		if (*str == ' ' && *(str + 1) != ' ' && *(str + 1) != '\0' && boolean == 0)
		{
			if (location > 0 && wc == location)
			{
				for (wordlength = 0; *(str + wordlength + 1) != '\0' && *(str + wordlength + 1) != ' '; wordlength++)
				{
					printf("current word count: %d, current word length: %d, current letter: %c\n", wc, wordlength, *(str + wordlength + 1));
				}
				printf("exiting wordcounter function.\n\n");
				return (wordlength);

			}
			boolean = 1;
			wc++;
			printf("flag is %d, current word count: %d, next char: %c\n", boolean, wc, *(str + 1));
		}
		boolean = 0;
		str++;
	}
	printf("exiting wordcounter function. word count is %d\n\n", wc);
	return (wc);
}
/**
 * initializeArray - declares a 2d array
 * @str: pointer to the string
 * Return: pointer to the initialized 2d array
 */
char **initializeArray(char *str)
{
	int wordcount, countchar, i;
	char **p;

	printf("\tentering initializeArray function\n");
	printf("counting words by calling wordcounter function\n");
	wordcount = wordcounter(str, -1);
	p = malloc(wordcount * sizeof(void *));
	printf("wordcounter function returned %d, memory allocated for array of pointers\n", wordcount);
	if (p == NULL)
		return (NULL);
	printf("entering loop to initialize each array\n");
	for (i = 0; i < wordcount; ++i)
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
		printf("array # %d initialized. Looping to next array.\n", i);
	}
	printf("Reached end of function\n\n");
	return (p);
}
/**
 * strtow -
 * @str: pointer to the string
 * Return: pointer to the 2d array
 */
char **strtow(char *str)
{
	int i, j, flag;
	int debugint;
	char **p;

	printf("Entered strow function\n");
	flag = 0;
	if (str == NULL)
		return (NULL);
	printf("Assigning pointer to 2d array by calling initializeArray function\n");
	p = initializeArray(str);
	for (debugint = 0; *(p + debugint); debugint++)
		;
	printf("Array is initialized. It is %d pointers long. pop back to strtow, entering fill loop\n", debugint);
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
	for (i = 0; i < debugint; i++)
		printf("%9s<END-OF-POINTER>", p[debugint]);
	putchar('\n');
	putchar('\n');
	return (p);
}
