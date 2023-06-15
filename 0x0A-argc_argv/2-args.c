#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: count o:f arguments
 * @argv: array of arguments values
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
