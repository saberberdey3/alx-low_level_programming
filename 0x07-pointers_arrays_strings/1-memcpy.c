#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: pointer to destination memory
* @src: pointer to source memory
* @n: number of bytes to copy
*
* Return: pointer to destination memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* loop through n bytes of src and copy to dest */
	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

return (dest);
}

