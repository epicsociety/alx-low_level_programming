#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: to be checked, it is a pointer to string str
 *
 * Return: void
*/
void _puts(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; s++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
