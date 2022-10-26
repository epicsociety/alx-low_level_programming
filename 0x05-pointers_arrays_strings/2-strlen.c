#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: theto check
 *
 * Return: 0
*/
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
