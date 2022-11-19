#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: variadic inputs
 *
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		x += va_arg(args, const unsigned int);
	}
	va_end(args);
	return (x);
}
