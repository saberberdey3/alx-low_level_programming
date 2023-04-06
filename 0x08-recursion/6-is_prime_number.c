#include "main.h"

/**
 * is_prime - Checks if a number is prime
 * @n: The number to be checked
 * @i: The divisor
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime(int n, int i)
{
	if (n < 2 || n % i == 0)
	return (0);
	else if (i == n / 2)
	return (1);
	else if (n % i != 0)
	return (is_prime(n, i + 1));
	else
	return (0);
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	return (1);
	else if (n <= 1)
	return (0);
	else
	return (is_prime(n, 2));
}
