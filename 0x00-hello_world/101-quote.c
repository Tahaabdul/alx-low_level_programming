#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a string out
 *
 * Description: Print a string out without using printf or put
 *
 * Return 1
 */


int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
