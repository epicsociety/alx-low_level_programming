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
	int j;
	int temp;
	int i = n;
	
	for (i--, j = 0; j < n / 2; j++, i--)
		temp = a[j], a[j] = a[i], a[i] = temp;
}
