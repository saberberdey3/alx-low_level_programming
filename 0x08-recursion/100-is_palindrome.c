#include "main.h"
#include <stdio.h>

/**
 * _check_palindrome - helper function to check if a string is a palindrome
 * @s: the string to check
 * @len: the length of the string
 * @i: the current index being checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _check_palindrome(char *s, int len, int i)
{
	if (i >= len / 2)
	return (1);
	if (s[i] == s[len - i - 1])
	return (_check_palindrome(s, len, i + 1));
	else
	return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;

	return (_check_palindrome(s, len, 0));
}
