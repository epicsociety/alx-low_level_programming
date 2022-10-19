#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 * Return: 0 Always
*/
void print_alphabet_x10(void)
{
	int count = 0;
	int c;

	while (count++ <= 9)
	{
		for (c = 97; c <= 122; c++)
			_putchar(c);
		_putchar('\n');
	}
}
