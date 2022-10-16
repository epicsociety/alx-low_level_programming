#include <stdio.h>
/**
 *main - prints alphabet in lowercase and uppercase
 *
 *Return: 0
*/

int main(void)

{
	char str(void);
	char c;
	char C;
	{
		for (c = 'a'; c <= 'z'; ++c)
			putchar (c);
		for (C = 'A'; C <= 'Z'; ++C)
			putchar (C);
		putchar ('\n');
	}
	return (0);
}
