#include "main.h"

/**
 * swap_int - swaps the vales of two integers
 * @a: is a pointer for a
 * @b: is a pointer for b
 *
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
