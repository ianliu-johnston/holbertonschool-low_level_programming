/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */
int _putchar(char c);
void print_alphabet(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
int main(void);
