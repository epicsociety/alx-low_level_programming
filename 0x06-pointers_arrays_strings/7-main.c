#include "main.h"
#include <stdio.h>

/**
 * main - checks the code for
 *
 * Return: 0 always
*/
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
