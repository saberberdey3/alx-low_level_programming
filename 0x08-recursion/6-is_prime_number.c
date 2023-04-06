#include "main.h"

/**
* is_prime_number - checks if a number is prime
* @n: the number to check
*
* Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{

	if (n < 2)
	return (0);
	if (n == 2)
	return (1);
	if (n % 2 == 0)
	return (0);

	return (is_prime(n, 3));
}

/**
* is_prime - checks if a number is prime
* @n: the number to check
* @i: the current divisor to try
*
* Return: 1 if prime, 0 otherwise
*/
int is_prime(int n, int i)
{
	if (n % i == 0)
	return (0);
	if (i * i > n)
	return (1);

	return (is_prime(n, i + 2));
}
