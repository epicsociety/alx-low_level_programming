#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: an interger
 * @y: an interger
 *
 * Return: 0 if success and -1 if y is lower than 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x *  _pow_recursion(x, --y));
}
