#include <stdio.h>

/**
 * main  -  prints all arguments passed to it
 * @argc: count of argument passed to main
 * @argv: a 2-D vector of string, stores the arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
