#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int g = 0;

	int t;

	while (*s != '\0')
	{
		g++;
		s++;
	}

	s--;

	for (t = g; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
