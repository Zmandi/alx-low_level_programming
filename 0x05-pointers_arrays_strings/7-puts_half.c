#include "main.h"
/**
 * puts_half - Prints half of a string
 * Prints the second half of the string
 * If the number of characters is odd
 * function should print the last n characters of the string
 * @str: string
 * Result: void
 */
void puts_half(char *str)
{
	int e, n, ls;

	ls = 0;

	for (e = 0; str[e] != '\0'; e++)
		ls++;

	n = (ls / 2);

	if ((ls % 2) == 1)
		n = ((ls + 1) / 2);

	for (e = n; str[e] != '\0'; e++)
		_putchar(str[e]);

	_putchar('\n');
}
