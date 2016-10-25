/**
 * _strlen - calculates the length of a string.
 * *s: pointer to the character array.
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	while(*s != '\0')
	{
		i++; 
		s++;
	}
	return (i);
}
