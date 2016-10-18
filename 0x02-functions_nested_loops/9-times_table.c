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
			if(j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if(res <= 10)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

int main(void);
