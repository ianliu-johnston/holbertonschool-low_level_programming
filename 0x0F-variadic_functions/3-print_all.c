#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
void p_string(va_list s)
{
	if (s == NULL)
		printf("(nil)");
	printf("%s", va_arg(s, char *));
}
/**
  * print_all - prints any argument passed into it
  * @format: formats symbols in order
  */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list ap;
	v_types valid_types[] =
	{
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string}
	};

	i = j = 0;
	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *valid_types[j].valid)
			{
				valid_types[j].f(ap);
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
