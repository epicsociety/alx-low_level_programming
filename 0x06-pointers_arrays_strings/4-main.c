#include "main.h"
#include <stdio.h>

/**
 * main - ceck the code
 * @a:an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
			
