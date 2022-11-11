#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using malloc
 * @b: 
 *
 * Return: a pointer to the allocated memory or 98 if fail
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	
	if (p == NULL)
		exit(98);
	else
		return (p);
}
