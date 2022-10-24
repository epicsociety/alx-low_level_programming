#include <stdio.h>

/**
 * main  -  finds and prints the largest prime factor of the 61285247514
 *Return: 0
*/
int main(void)
{
	unsigned long int i, n = 612852475143;
	
	for (i = 3; i < 1231952; i = i +2)
	{
		while ((n % i == 0) && (n !=i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
