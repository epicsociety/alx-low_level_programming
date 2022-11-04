#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * factorial - returns the factorial of a given number
 * @n: an interger
 *
 * Return: 0 if success or -1 if n is lower than 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	return n * factorial (n -1);
}

