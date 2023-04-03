#include "main.h"

/**
* _strstr - Finds the first occurrence of the substring needle in the
* string haystack.
*
* @haystack: The string to be searched.
* @needle: The substring to be located.
*
* Return: If needle is located - a pointer to the beginning of the located
* substring; otherwise - NULL.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
	for (j = 0; needle[j]; j++)
	{
		if (haystack[i + j] != needle[j])
	{
		break;
		}
	}

	if (!needle[j])
	{
	return (haystack + i);
	}
	}

	return (0);
}

