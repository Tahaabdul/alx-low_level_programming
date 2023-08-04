#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count o:f arguments
 * @argv: array of arguments values
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
