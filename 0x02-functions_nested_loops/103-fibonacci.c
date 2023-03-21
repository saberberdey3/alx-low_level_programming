#include "main.h"

/**
 * main - Prints the sum of even-valued terms in the Fibonacci sequence
 * up to 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 0, b = 1, c = 0, sum = 0;

	while (c < 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);

	return (0);
}
