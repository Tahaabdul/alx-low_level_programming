#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  sums of all parameters in function call
 * @n: no of parameters to sum
 * Return: sum or 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list lastArg;

	va_start(lastArg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(lastArg, int);

	va_end(lastArg);

	return sum;
}
