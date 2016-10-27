/**
 * _strncpy - copies a string
 * @dest: Destination string
 * @src: source string
 * Return: pointer to copied string.
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;
	
	for (i = n = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
			;
	return (s1[i] - s2[i]);
}
