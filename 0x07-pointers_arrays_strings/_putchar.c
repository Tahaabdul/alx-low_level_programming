#include <stdio.h>
#include <unistd.h>
#include "main.h"


/**
*_putchar - writes character c to std output
*
*@c: the character to be printed
*Return: 1 on success -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
