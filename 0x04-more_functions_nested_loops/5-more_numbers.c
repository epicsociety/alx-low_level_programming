#include "main.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *Return: void (no return)
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		j = 1;
		while (j <= 10)
			_putchar(i);
		j++;
	}
	_putchar('\n');
}
