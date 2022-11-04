#include "main.h"

/**
 * prime_numbers - determine if a number is a prime number
 * @a: an interger to check
 * @b: an interger used to check
 *
 * Return: a number
*/
int prime_numbers(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime_numbers(a, b + 1));
}
/**
 * is_prime_number - says if an interger is a prime number
 * @n: count
 *
 * Return: 1 if interger is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_numbers(n, 2));
}
