#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create an array chars and initialize it 
 * @size: the size of the array to create
 * @c: the char to initialize the array
 *
 * Return: On success, a pointer to the created array. On faillur, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr [i] = c;

	return (arr);
}
