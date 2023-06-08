#include "main.h"
/**
 * flip_bits - returns the number of bits
 * needed to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int curr_bit;
	unsigned long int res = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		curr_bit = res >> k;

		if (curr_bit & 1)
			count++;
	}

	return (count);
}
