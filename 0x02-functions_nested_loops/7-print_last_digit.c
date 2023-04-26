#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @d: integer
 * Return: last digit
 */
int print_last_digit(int d)
{
	int g;

	g = d % 10;

	if (g < 0)
	{
		_putchar(-g + '0');
		return (-g);
	}
	else
	{
		_putchar(g + '0');
		return (g);
	}
}
