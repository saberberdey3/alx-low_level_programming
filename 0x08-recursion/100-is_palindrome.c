#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
	return (1);

	return (_check_palindrome(s, len, 0));
}

/**
 * _check_palindrome - checks if a string is a palindrome recursively
 * @s: string to check
 * @len: length of the string
 * @i: current index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _check_palindrome(char *s, int len, int i)
{
	if (i >= len / 2)
	return (1);

	if (s[i] != s[len - i - 1])
	return (0);

	return (_check_palindrome(s, len, i + 1));
}

/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	return (1 + _strlen_recursion(s + 1));
}
