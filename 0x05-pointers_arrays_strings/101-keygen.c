#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates password for 101-crackme
 *
 * Return: 0
*/
int main(void)
{
	int p, u, m, a;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s[58]; /*s is an array that contains the password*/

	srand(time(NULL));
	while (a != 2772)
	{
		p = m = a = 0;
		while ((2772 - 122) > a)
		{
			u = rand() % 62;
			s[p] = c[u];
			a += c[u];
			p++;
		}
		while (c[m])
		{
			if (c[m] == (2772 - a))
			{
				s[p] = c[m];
				a += c[m];
				p++;
				break;
			}
			m++;
		}
	}
	s[p] = '\0';
	printf("%s", s);
	return (0);
}
