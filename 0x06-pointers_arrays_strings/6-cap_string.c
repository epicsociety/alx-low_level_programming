#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 *@str: pointer to a string
 * Return: pointer to a string
*/
char *cap_string(char *str)
{
	int i, j;
	int x = 32;
	char sep[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};
	char *ptr = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - x;
		}
		x = 0;

		for (j = 0; j <= 12; j++)
		{
			if (str[i] == sep[j])
			{
				j = 12;
				x = 32;
			}
		}
	}
		return (ptr);
}

