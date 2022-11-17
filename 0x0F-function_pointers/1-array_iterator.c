#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of arr
 * @size: size of the array
 * @action: a pointer to the function to use
 * @array: an array of elements 5 to execute fucn on
 *
 * Return: a pointer to a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
