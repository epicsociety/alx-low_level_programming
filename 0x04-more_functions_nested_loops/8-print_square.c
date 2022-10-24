#include "main.h"

/**
 * print_square -  prints a square, followed by a new line
 * @size: the parameter to check
 *
 * Return: void or a new line if size is 0 or less
*/
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	{
		if (size <= 0)
			_putchar ('\n');
	}
}
