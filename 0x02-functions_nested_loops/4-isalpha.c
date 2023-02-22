#include "main.h"

/**
 * _isalpha -  a function to if character is aphabet
 * @c: character to check
 * Return: 1 for true 0 for false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
