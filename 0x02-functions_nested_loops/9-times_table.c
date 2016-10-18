int _putchar(int c);
/**
 * _isalpha - prints the times table from 0 - 9.
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = (i * j);

			_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

int main(void);
