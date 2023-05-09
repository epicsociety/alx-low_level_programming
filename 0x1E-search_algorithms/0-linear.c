#include "search_algos.h"
#include <stdio.h>


/**
 * linear_search - searches for a value in an array using linear search
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: what the function is searching for
 *
 *Return: 0 on success and -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));

		if (*(array + i) == value)
		{
			return (i);
		}

	}
	
	return (-1);
}
