#include "main.h"

/**
 * factorial - returns the factorial of a number using recursion
 *
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
