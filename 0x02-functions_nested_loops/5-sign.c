#include "main.h"

/**
 * print_sign - printthe sign of a number
 * @n: variable to check for sign
 * Return: 1,+ if >0, 0 when == 0; -1,-
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

	_putchar('+');
	return (1);
}
