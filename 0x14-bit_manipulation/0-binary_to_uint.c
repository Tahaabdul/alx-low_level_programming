#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a binary string ('0' and '1' characters only).
 * Return: The converted unsigned integer or exits
 * with an error code if b is NULL or contains invalid characters.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) | (b[i] - '0');
	i++;
	}


	return (result);
}
