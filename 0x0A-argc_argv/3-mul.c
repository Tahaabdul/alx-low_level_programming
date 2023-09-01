#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - return the product of 2 args
 * @argc: argument count
 * @argv: vector (array) of vectors
 * Return: 1 and print "Error" for argc !=2 or print result
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

