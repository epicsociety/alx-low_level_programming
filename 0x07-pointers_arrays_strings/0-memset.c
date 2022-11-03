#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to a buffer
 * @b: constant byte
 * @n: number of bytes in memory area to be filled pointed to by s
 *
 * Return: a pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
