int _putchar(char c);
int _abs(int);
/**
 * print_last_digit - prints the last digit of a numer.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	_putchar(_abs((n % 10)) + '0');
	return (_abs(n % 10));
}
/**
 * main - 
 *
 * Return:
 */

int main(void)
{
	int r;

	print_last_digit(97);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
