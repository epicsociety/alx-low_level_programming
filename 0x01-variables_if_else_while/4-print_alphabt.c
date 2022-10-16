#include <stdio.h>
/**
 *main - print alphabet in lowercase except q and e
 *
 *Return: 0
*/

int main(void)

{
	char str(void);
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
			putchar (c);
	}
	putchar('\n');
	return (0);
}
