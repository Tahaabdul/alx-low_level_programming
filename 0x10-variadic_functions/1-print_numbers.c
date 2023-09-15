#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: char orstring to be printed between numbers
 * @n: number of integers passed to the function a constant
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lastArg;

	va_start(lastArg, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(lastArg, int));
	}
	va_end(lastArg);
	printf("\n");
}

