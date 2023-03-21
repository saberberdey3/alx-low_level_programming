#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, separated by comma and space.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, c;
	int i;

	printf("%lu, %lu", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
