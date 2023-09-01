#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: count o:f arguments
 * @argv: array of arguments values
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

