#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @ s1: the first string
 * @ s2: the second string
 * @n: the number of bytes of s2
 *
 * Return: a pointer to the allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, str1, str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{ 
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n < j)
		j = n;

	j += i;
	p = malloc(sizeof(char *) * (j + 1));

	if (p == NULL)
		return (NULL);
	for (str1 = 0; str1 < i; str1++)
		p[str1] = s1[str1];
	for (str2 = 0; str2 < j; str2++)
	{
		p[str1] = s2[str2];
		str1++;
	}
	str1++;
	p[str1] = '\0';
	return (p);
}
