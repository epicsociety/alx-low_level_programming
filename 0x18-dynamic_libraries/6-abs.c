#include "main.h"

/**
 *_abs - computes the absolute value of an interger
 *@a: The number to be checked
 *
 *Return: 0 or any absolute value of number
*/
int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;

		return (abs_val);
	}
	return (a);
}
