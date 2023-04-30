#include "main.h"
/**
 * more_numbers - Print numbers from 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int b, z;

	for (b = 1; b <= 10; b++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)

			_putchar('1');
			_putchar(z % 10 + '0');
		}

		_putchar('\n');
	}
}
