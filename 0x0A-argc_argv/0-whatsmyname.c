#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: gives the argument count pased to main in command line
 * @argv: a string that stores the arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s ", argv[0]);
	printf("\n");
	return (0);
}
