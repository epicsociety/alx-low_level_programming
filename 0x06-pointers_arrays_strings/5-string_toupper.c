#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @str: a pointer to a string
 *
 * Return: pointer of a string
*/
char *string_toupper(char *str)
{
	int i;
	char *ptr = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (ptr);
}
