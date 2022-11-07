#include "stdio.h"

/**
 * main - prints the numbe rof arguments passed to it
 * @argc: arguments count passed
 * @argv: a string vector that stores the arguments passed
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argv;

	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
