#include <stdio.h>

/**
 * add - adds the values
 * @a: the first value passed
 * @b: the second value passed
 *
 * Return: the sum
*/
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts the values
 * @a: the first value passed
 * @b: the second value passed
 *
 * Return: the result
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies the values
 * @a: the first value passed
 * @b: the second value passed
 *
 * Return: the product
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides the values
 * @a: the first value passed
 * @b: the second value passed
 *
 * Return: the division result
*/
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - finds the modulus
 * @a: the first value passed
 * @b: the second value passed
 *
 * Return: the modulus of give values
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: division by zero\n");
		return (0);
	}
	return (a % b);
}
