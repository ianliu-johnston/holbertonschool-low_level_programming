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

	i = 0;
	while (*haystack != '\0')
	{
		printf("hay: %s ==> needle: %s\n", haystack, needle);
		if (needle[i] != *haystack)
			haystack++;
		else /* needle[i] == *haystack */
		{
			i = 0;
			while (*(needle + i) == *(haystack + i))
			{
				printf("n: %c --> h: %c\n", *(needle + i), *(haystack + i));
				if (*(needle + i) == *(haystack + i) && *(needle + i + 1) == '\0')
					return (needle);
				i++;
			}
			haystack += i;
		}
	}
	return (0);
}
