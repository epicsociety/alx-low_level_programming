#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2
 *
 * Return: a pointer to the allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, slen1= 0, slen2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[slen1] != '\0')
	{
		slen1++;
	}
	while (s2[slen2] != '\0')
	{
		slen2++;
	}
	if (n > slen2)
	n = slen2;
	p = malloc(sizeof(char *) * (slen1 + n +1));

	if (p == NULL)
		return (0);
	for (i = 0; i < slen1; i++)
		p[i] = s1[i];
	for (; i < (slen1 + n); i++)
	{
		p[i] = s2[i - slen2];
	}
	p[i] = '\0';
	return (p);
}
