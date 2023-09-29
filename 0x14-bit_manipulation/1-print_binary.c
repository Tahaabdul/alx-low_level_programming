#include <stdio.h>

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int bit_count = sizeof(n) * 8;
	int print_flag = 0;

	while (bit_count-- > 0)
	{
		if (n & (1UL << bit_count))
		{
			_putchar('1');
			print_flag = 1;
		}
		else if (print_flag)
		{
			_putchar('0');
		}
	}

	if (!print_flag)
	{
		_putchar('0');
	}
}
