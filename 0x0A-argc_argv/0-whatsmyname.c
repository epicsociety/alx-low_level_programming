#include "stdio.h"

/**
 * main - prints the program's name
 * @argc: gives the argument count pased to main in command line
 * @argv: a string that stores the arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
