#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for ( ; *haystack != '\0'; haystack++)
	{
		for (i = 0; *(needle + i) != '\0'; i++)
			if (*(needle + i) == *(haystack + i) && *(needle + i + 1) == '\0')
				return (haystack);
	}
	return (haystack);
}
