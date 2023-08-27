#include "main.h"
#include <stdlib.h>


/**
 * length - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @start: The starting index.
 * @end: The ending index.
 * @s: The string.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(int start, int end, char *s)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(start + 1, end - 1, s));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = length(s);

	if (len <= 1)
		return (1);
	return (is_palindrome_recursive(0, len - 1, s));
}
