#include "holberton.h" 
/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */
int _strncmp (char *s1, char *s2, unsigned int b)
{
	unsigned int i;

	for (i = 0; i <= b && s1[i] == s2[i] && *s1 && *s2; i++)
		;
	return (i - b);
}


char *_strstr(char *haystack, char *needle)
{
	int len;
/*Get length of needle for strncmp*/
	len = 0;
	while (needle[len])
		len++;
	/*compare substring*/
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
