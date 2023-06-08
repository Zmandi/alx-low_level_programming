#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int curr_bit;

	for (k = 63; k >= 0 ; k--)
	{
		curr_bit = n >> k;
		if (curr_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
