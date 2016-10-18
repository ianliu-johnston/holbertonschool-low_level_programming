int _putchar(int c);
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
 */

int main(void)
{
	char c[] = "Holberton";
	int i;
	int n;

	n = ARRAY_SIZE(c);
	i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
