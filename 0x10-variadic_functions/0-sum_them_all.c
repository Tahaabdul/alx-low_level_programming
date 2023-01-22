#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: list of all araguments passed to sum_them_all fxn
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list argSum;

	if (n != 0)
	{
		va_start(argSum, n);
		sum  = 0;
		i = 0;

		while (i < n)
		{
			sum += va_arg(argSum, int);
			i++;
		}
		va_end(argSum);
		return (sum);
	}

	return (0);
}
