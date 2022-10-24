#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 *
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
	else if (i % 3 == 0)
	{
		printf("Fizz");
		printf(" ");
	}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else 
		{
			printf("%d", i);
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}