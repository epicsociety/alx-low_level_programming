#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using malloc
 * @b: an interger
 *
 * Return: a pointer to the allocated memory or 98 if fail
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	
	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}
