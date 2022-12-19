#include "main.h"

/**
*print_alphabet_x10 - print all alphabets 10x
*
*Return: Always 0
*/

void print_alphabet_x10(void)
{
	char str;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (str = 'a'; str <= 'z'; str++)
		{
			_putchar(str);
		}
		_putchar('\n');
	}
}
