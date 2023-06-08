#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing binary number
 *
 * Return: unsigned int; 0 if there is one or more chars in the string
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int res = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);

		res = 2 * res + (b[k] - '0');
	}

	return (res);
}
