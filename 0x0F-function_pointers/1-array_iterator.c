#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of arr
 * @size: size of the array
 * @action: a pointer to the function to use
 * @array: an array of elements 5
 *
 * Return: a pointer to a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
