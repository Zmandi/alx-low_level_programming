#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Number
 * Return: Always 0
 */
void print_to_98(int n);
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (a == 0)
				{
					_putchar(c + '0');
				}
				else if (c < 10 && a != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c >= 10 && c <= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
					_putchar('\n');
		}
	}
}
