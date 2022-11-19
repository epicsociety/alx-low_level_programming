#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * 
 * Return: 0
*/
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0; int n = 0;
	char *str;
	char *sep = ", ";

	va_start(arguments, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if ( n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c': 
				printf("%c%s", va_arg(arguments, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(arguments, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(arguments, double), sep);
				break;
			case 's':
				str = va_arg(valist, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	printf("%s%s", str, sep);
	va_end(arguments);
}	
