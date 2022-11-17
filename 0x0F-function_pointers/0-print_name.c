#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - prints a name
 *@name: the string to print
 *@f: a pointer to a function
 *
 * Return: pointer to the function
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
