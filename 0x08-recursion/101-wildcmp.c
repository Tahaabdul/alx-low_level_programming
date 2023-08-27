#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * wildcmp - Compares two strings, considering a special character '*'.
 *
 * This function compares two strings, where the second string can contain
 * the special character '*'. The '*'
 * can replace any string (including an empty string).
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare, which can contain '*'.
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */


int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0'))
		{
			return (1);
		}

		return (0);
	}

	if (*s2 == '*' && *(s2 + 1) == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
