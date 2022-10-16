#include <stdio.h>
/**
 *main - prints the size of various types on the computer a C program compiled
 *Return: 0
 *
*/
int main(void)
{
	char (a);
	int (b);
	long int (c);
	long long int (d);
	float (f);

	printf("size of a char: %zu byte(s)\n", sizeof(a));
	printf("size of an int: %zu byte(s)\n", sizeof(b));
	printf("size of a long int: %zu byte(s)\n", sizeof(c));
	printf("size of a lng long int: %zu byte(s)\n", sizeof(d));
	printf("size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
