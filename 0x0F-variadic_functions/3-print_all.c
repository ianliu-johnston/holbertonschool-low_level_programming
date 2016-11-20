#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * p_char - prints characters
  * @c: character to print
  */
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
  * p_int - prints integers
  * @i: integer to print
  */
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
  * p_float - prints floats
  * @f: float to print
  */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
  * p_string - prints strings
  * @s: string to print
  */
void p_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
  * print_all - prints any argument passed into it
  * @format: formats symbols in order
  */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator;
	va_list argp;
	v_types valid_types[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string}
	};

	i = j = 0;
	separator = "";
	va_start(argp, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *valid_types[j].valid)
			{
				printf("%s", separator);
				valid_types[j].f(argp);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
