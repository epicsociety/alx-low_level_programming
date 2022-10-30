#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: pointer to the encoded string
*/
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0 ; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = n[j];
			}
		}
	}
	return (str);
}
