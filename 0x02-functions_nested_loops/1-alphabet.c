#include "main.h"

/**
* print_alphabet - a function that prints the alphabet, in lowercase
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char so;

	for (so = 'a'; so <= 'z'; so++)
	{
		_putchar(so);
	}
	_putchar('\n');
}
