#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: a char separating strings
 * @n : number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stringsArgs;
	char *str;


	va_start(stringsArgs, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(stringsArgs, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (str != NULL)
			printf("%s", str);
		else
			printf("%s", "(nil)");
	}

	va_end(stringsArgs);
	printf("\n");
}
