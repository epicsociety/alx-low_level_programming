#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: pointer to a string to be copied
 * @dest: pointer to teh buffer where string is copied
 *
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
