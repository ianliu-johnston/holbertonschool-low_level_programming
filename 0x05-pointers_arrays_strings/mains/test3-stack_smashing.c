/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = ",;.!?\"(){}";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0' && s[i] != sep[j]; j++)
			s[i + 1] -= ('a' - 'A');
	}
	return (s); 
}
