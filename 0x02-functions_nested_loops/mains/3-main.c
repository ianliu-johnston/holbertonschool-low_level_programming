/**
 * main - basic function checks
 *
 * Return: 0 on success.
 */
int _islower(int c);
int _putchar(int d);

#define PUTC _putchar(r + '0')

int main(void)
{
	int r;

	r = _islower('H');
	PUTC;
	r = _islower('o');
	PUTC;
	r = _islower(108);
	PUTC;
	_putchar('\n');
	return(0);
}
