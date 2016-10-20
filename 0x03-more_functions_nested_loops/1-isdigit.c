/**
 * _isdigit - checks for digits 1-9
 * @c: character to check.
 * Return: 1 if c is a digit, otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
