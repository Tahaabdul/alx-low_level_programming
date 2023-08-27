#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>"


/**
 * print_c - prints char type args
 * @a: list of chars to print
 * Return: always 0
 */

int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}


/**
 * print_i - prints int type char
 * @a: list of integers to print
 * Return: always 0
 */

int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}

/**
 * print_f - prints floats
 * @a: list of floats
 * Return: always 0
 */

int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}


/**
 * print_s - prints string in args
 * @a: list of strings 
 * Return: always 0
 */
int print_s(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s != NULL)
	{
		printf("%s", s);
		return (0);
	}
	printf("%s", "(nil)");
	return (0);
}

