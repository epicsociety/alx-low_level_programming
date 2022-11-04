#include "main.h"

/**
 * _print_rev_recursion - reverses a string
 * @s: string which in C is a pointer
 *
 * Return: 0
*/
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0') /**
			   * can also be written without the returm
			   * as; if (*s) or if (*s != '\0')
			   * I prefer this to better understand base in recursion
			   */
		return;
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
