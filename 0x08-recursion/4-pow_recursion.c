#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *
 *@x: the number to find power of
 *
 *@y: the number of times to raise x by
 *Return: x time x y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
