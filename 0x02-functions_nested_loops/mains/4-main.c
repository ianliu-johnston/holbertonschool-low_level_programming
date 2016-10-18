/**
 * main - basic function checks
 *
 * Return: 0 on success.
 */
int _isalpha(int c);
int _putchar(int d);

#define PUTC _putchar(r + '0')

int main(void)
{
	int r;

	r = _isalpha('H');
	PUTC;
	r = _isalpha('o');
	PUTC;
	r = _isalpha(108);
	PUTC;
	r = _isalpha(';');
	PUTC;
	_putchar('\n');
	return(0);
}
