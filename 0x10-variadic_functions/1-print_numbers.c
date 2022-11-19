#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, passed as args
 * @separator: the separator
 * @n: number of arguments passed
 *
 * Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(arguments, const unsigned int);

		if (separator == NULL)
		{

		}
		if (separator != NULL && n != (i - 1))
		{
			printf("%s", separator);
			printf("%d", value);
		}
	}
	printf("\n");
	va_end(arguments);
}
