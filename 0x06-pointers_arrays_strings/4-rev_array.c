#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: ential the array
 * @n: length of array
 *
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	for (i = 0, j = n -1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
