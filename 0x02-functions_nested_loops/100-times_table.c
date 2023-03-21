#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: integer input
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else if (i * j < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(i * j + '0');
			}
			else if (i * j < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(i * j / 100 + '0');
				_putchar(i * j % 100 / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
