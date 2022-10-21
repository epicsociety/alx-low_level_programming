#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: this is the input
 *
 *Return: 1 if c is uppercase
 *Return: 0 otherise
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
