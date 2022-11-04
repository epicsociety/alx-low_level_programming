#include "main.h"
#include <math.h>

/**
 * square_root - find the natural square root
 * @a: number
 * @b: incrementor
 *
 * Return: an interger
*/
int square_root(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if ( a * a > b)
	{ 
		return (-1);
	}
	else
	{
		return (square_root(a + 1, b));
	}
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: interger
 *
 * Return: 0 if success and -1 if n does not have 
 * a naturalsqr root
*/
int _sqrt_recursion(int n)
{
	int i = 1;
	
	return (square_root(i, n));
}
