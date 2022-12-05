#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: points to a number
 * @index: index
 *
 * Return: 1 if it worked, or -1 incase of error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(unsigned long int) * 8;
	if (index > size)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}
