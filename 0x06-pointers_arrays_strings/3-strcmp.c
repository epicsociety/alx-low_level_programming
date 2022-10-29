#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 or +ve or -ve
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] = s2[i])
		{
			{
				flag = 0;
				break;
				return (0);
			}
		}
	}
		if (flag == 1)
			return (0);
}
