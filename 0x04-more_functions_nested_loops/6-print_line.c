#include "main.h"
/**
 * print_line - Draws a straight line
 * @n: number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;

		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
