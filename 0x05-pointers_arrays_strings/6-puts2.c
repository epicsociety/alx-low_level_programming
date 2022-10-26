#include "main.h"

/**
 * puts2 - prints every character in the even position in a string
 * @str: is a pointer, the variable to check
 *
 * Return: void
*/
void puts2(char *str)
{
	int i = 0;
	
	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
