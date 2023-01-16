#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an interger
 * @s: a pointer, to be checked
 *
 * Return: 0
*/
int _atoi(char *s)
{
	int  p, u, m, a;

	p = m = 0;
	a = 1;
	while ((*(s + p) < '0' || *(s + p) > '9') && (*(s + p) != '\0'))
	{
		if (*(s + p) == '-')
			a *= -1;
		p++;
	}
	u = p;
	while ((*(s + u) >= '0') && (*(s + u) <= '9'))
	{
		m = m * 10 + a * (*(s + u) - '0');
		u++;
	}
	return (m);
}

