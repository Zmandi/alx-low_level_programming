#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: Number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)

	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < n; a++)
		{

			for (b = 0; b < n; b++)
			{

			if (a == b)

			_putchar('\\');

		else if (a < b)

			_putchar(' ');
			}

		_putchar('\n');

		}

	}

}
