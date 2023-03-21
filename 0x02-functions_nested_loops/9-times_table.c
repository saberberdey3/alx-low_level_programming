#include "main.h"

/**
* times_table - function that prints the 9 times table starting with 0.
*/

void times_table(void)
{
	int kh, a, ra;

	for (kh = 0; kh < 10; kh++)
	{
		for (a = 0; a < 10; a++)
		{
			ra = kh * a;

			if (a == 0)
				_putchar('0');
		else if (ra < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(ra + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(ra / 10 + '0');
			_putchar(ra % 10 + '0');
		}
	}
	_putchar('\n');
	}
}
