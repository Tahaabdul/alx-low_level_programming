#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer value to use in setting new pointer to
 * @to: string to set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
