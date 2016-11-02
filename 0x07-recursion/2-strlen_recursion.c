/*
 * _strlen_recursion - returns the length of a string
 * @s: the tring
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i;
	i = 0;
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s));
}
