#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the sum of args
 * @argc: count of argument
 * @argv: vector of arguments
 * Return:0 for no number, not digits print"Error" return 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}


