#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches through an array for value using jump search
 * @array: pointer to the array
 * @size: size of the array
 * @value: target of the search
 *
 * Return: index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0;
	size_t step = sqrt(size);
	size_t end = step;

	if (array == NULL)
	{
		return (-1);
	}

	while (array[end] < value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[end] >= value)
		{
			break;
		}
		start = end;
		end += step;
	}

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i < size && i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
