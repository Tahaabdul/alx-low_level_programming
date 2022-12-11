#include <stdio.h>


/**
 * main - print all single dits base10 numbers
 * using putchar only
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58;  n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
