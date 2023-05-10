#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary_recurcive - searches for a value with binary search
 * @array: pointer to the array
 * @lb: left bound
 * @rb: right bound
 * @value: target of the search
 *
 * Return: index of the value or -1
 */
int advanced_binary_recurcive(int *array, size_t lb, size_t rb, int value)
{
	size_t mid, i;

	if (lb > rb)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (i = lb; i <= rb; i++)
	{
		printf("%d", array[i]);
		if (i != rb)
		{
			printf(", ");
		}
	}
	printf("\n");

	mid = (lb + rb) / 2;

	if (array[mid] == value && (mid == 0 || array[mid - 1] != value))
	{
		return (mid);
	}
	else if (array[mid] >= value)
	{
		rb = mid;
		return (advanced_binary_recurcive(array, lb, rb, value));
	}
	else
	{
		lb = mid + 1;
		return (advanced_binary_recurcive(array, lb, rb, value));
	}

}

/**
 * advanced_binary - calls advanced_binary_recurcive()
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: value to be searched
 *
 * Return: -1 if value not found or the index where it's found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	return (advanced_binary_recurcive(array, 0, size - 1, value));
}
