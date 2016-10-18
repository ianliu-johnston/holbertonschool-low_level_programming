int _putchar(char c);

/**
 * print_sign - Determines whether an integer is positive, negative or zero. 
 *
 * Return:
 */

int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(n == 0)
	{
		_putchar('0');
		return(0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else
	{
		_putchar('-');
		return('/');
	}
}
