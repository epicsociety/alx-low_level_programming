#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: a pointer, the variable to work with
 * @src: a pointer, another variable to check
 *
 * Return: a pointer to the resurting string
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
