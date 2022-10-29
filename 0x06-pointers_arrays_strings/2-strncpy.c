#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: a pointer to destination string
 * @src: a pointer to source string
 * @n: Lenth of string
 *
 * Return: pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (ptr);
}
