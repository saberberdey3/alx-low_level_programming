#include "main.h"

/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int z, ba;

	z = -1;

	while (++z < 10)
	{
		for (ba = 'a'; ba <= 'z'; ba++)
			{
				_putchar(ba);
			}
			_putchar('\n');
	}
}
