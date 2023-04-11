#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **words = NULL, *token = NULL;
	int count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	token = strtok(str, " ");
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}

	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	count = 0;
	token = strtok(str, " ");
	while (token != NULL)
	{
		words[count] = strdup(token);
		if (words[count] == NULL)
		{
			while (count-- >= 0)
				free(words[count]);
			free(words);
			return (NULL);
		}
		count++;
		token = strtok(NULL, " ");
	}
	words[count] = NULL;

	return (words);
}
