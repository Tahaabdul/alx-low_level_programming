#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to string to find length of
 * Return: length of the string
 */


int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
