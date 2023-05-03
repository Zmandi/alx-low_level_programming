#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int l = 0;
	int b = 0;
	char *m = str;
	int c;

	while (*m != '\0')
	{
		m++;
		l++;
	}

	b = l - 1;

	for (c = 0; c <= b; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}

	}
	_putchar('\n');
}
