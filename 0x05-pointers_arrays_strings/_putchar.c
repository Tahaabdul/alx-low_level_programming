#include <stdio.h>
#include <unistd.h>

/**
*_putchar writes character c to std output
*
*Return: 1
*/

int _putchar(char c)
{	
	return (write(1, &c, 1));
}
