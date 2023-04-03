#include "main.h"

/**
* _memset - fills memory with a constant byte.
* @s: pointer to the memory area to fill.
* @b: the constant byte used to fill the memory.
* @n: the number of bytes to be filled.
*
* Return: a pointer to the filled memory area.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

