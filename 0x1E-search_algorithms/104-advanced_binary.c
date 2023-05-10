#include "search_algos.h"
#include <stdio.h>
/**
 * advanced_binary - searches for a value in a sorted array with binary searches
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: value to be searched
 *
 * Return: -1 if value not found or the index where it's found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid, lb, rb;

	lb = 0;
	rb = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (lb <= rb)
	{
		printf("Searching in array: ");
		for (i = lb; i <= rb; i++)
		{
			printf("%d", array[i]);
			if (i != rb)
				printf(", ");
		}
		printf("\n");

		mid = (lb + rb) / 2;
		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			rb = mid;
		}
		else if (array[mid] < value)
		{
			lb = (mid + 1);
		}
		else
		{
			rb = (mid - 1);
		}
	}
	return (-1);
}
