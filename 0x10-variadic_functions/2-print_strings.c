#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: a separator
 * @n: number of strings passed to to the function
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *str;

	va_start(arguments, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char *);

		if (i == (n - 1))
			printf("%s", separator);

		if (str == NULL)
			printf("%s", "(nil)");
		printf("%s", str);
	}
	printf("\n");
	va_end(arguments);
}
