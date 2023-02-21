#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c : character to be compared
 * Return: 1 if lowercase else 0
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
