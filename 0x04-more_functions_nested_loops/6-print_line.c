#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times
 * Return: nothing or \n if n is 0
*/
void print_line(int n)
{
	int count = 0;

	while (n != 0)
	{
		n = n / 10;
		count++;
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
