#include "main.h"
/**
 * _print_rev_recursion - Print a srtring in reverse
 * @s: string
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);

	_putchar(*s);
	}
}
