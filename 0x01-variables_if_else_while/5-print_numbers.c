#include <stdio.h>

/**
 * main - print all single digit  base10 numbers
 *
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");
	return (0);
}
