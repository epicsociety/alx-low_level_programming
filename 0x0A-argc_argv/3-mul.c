#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the results
 * @argc: arguments count
 * @argv: string, stores the arguments
 *
 * Return: 0 if success and 1 if failure
*/
int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
