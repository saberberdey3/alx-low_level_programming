#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of the number n, or -1 if n does not have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (calc_sqrt(n, 1));
}

/**
 * calc_sqrt - calculates the natural square root of a number using recursion
 * @n: the number to calculate the square root of
 * @i: the possible square root to test
 *
 * Return: the natural square root of the number n, or -1 if n does not have a
 * natural square root
 */
int calc_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calc_sqrt(n, i + 1));
}
