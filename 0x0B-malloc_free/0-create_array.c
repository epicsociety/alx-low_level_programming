#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of hcars and
 * and initializes it with a specific char
 * @c: innitial value
 * @size: the array size.
 *
 * Return: a null if falls
 * and a pointer to an array when succcesful
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int  i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
		if (array == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
