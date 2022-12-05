#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 *
 * Return: 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(unsigned long int) * 8;
	if (index > size)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
