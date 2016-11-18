#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *words;
	va_list ap;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		words = va_arg(ap, char *);
		(words != NULL) ? printf("%s", words) : printf("(nil)");
		(i + 1 != n) ? printf("%s", separator) : putchar('\n');
	}
	va_end(ap);
}
