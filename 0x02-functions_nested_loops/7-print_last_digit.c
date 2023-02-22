#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to get last digit from
 * Return: last digit
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
