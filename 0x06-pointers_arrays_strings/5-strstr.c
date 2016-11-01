/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		if (needle[i] != *haystack)
			haystack++;
		else /* needle[i] == *haystack */
		{
			i = 0;
			while (*(needle + i) == *(haystack + i))
			{
				if (*(needle + i) == *(haystack + i) && *(needle + i + 1) == '\0')
					return (needle);
				i++;
			}
			haystack += i;
		}
	}
	return (0);
}
