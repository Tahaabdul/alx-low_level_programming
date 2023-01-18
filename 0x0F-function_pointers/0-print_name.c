#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print in function
 * @ptr: pointer to the printing function
 */

void print_name(char *name, void (*ptr)(char *))
{
	if (!name || !ptr)
		return;
	ptr(name);
}
