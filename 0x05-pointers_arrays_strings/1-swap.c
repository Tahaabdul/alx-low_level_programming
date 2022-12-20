#include "main.h"

/**
*swap_int - swaps integers
*@a: first integer
*@b: second intege
*/

void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}

