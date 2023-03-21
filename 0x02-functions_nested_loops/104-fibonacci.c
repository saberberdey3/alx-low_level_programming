#include "main.h"

/**
* main - Prints the first 98 Fibonacci numbers,
*starting with 1 and 2, followed by a new line.
*
* Return: Always 0.
*/

int main(void)
{
	unsigned int long i, a, b, c;
	unsigned long int a1, a2, b1, b2, c1, c2;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);

	for (i = 2; i < 98; ++i)
	{
		c = a + b;
		printf("%lu", c);

		if (i != 97)
			printf(", ");

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
