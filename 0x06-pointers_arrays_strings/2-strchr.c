/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurence of character c
 * or NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	while (*s != '\0' && *s != c)
	{
		i++;
		s++;
		if (s[i] == '\0')
			return ("NULL");
	}
	return (s);
}
