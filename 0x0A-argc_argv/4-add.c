#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: stores arguments
 *
 * Return: 0 if success, 1 if failure
*/
int main(int argc, char *argv[])
{
	int i,j,sum = 0;
	
	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 47 || argv[i][j] > 57)
			{
			printf("Error\n");
			return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
