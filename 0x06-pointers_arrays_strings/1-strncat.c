#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: a pointer to destination of string
 * @src: a pointer to source of string
 * @n: variable, length of int
 *
 * Return: pointer to the result of string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (ptr);
}
