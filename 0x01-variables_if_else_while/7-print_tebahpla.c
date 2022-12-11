#include <stdio.h>

/**
 * main - print alphabets in reverse order
 *
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int str;

	for (str = 122; str >= 97; str--)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
