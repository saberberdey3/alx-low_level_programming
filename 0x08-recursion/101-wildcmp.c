#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be considered identical, otherwise 0
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0' && *(s2 + 1) == '\0')
			return (1);
		else if (*s1 == '\0' || *(s2 + 1) == '\0')
			return (0);
		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		else if (wildcmp(s1 + 1, s2 + 1))
			return (1);
	}
	return (0);
}
