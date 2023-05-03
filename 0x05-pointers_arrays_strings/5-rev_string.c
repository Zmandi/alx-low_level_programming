#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int ls = 0;
	int a;

	while (s[ls] != '\0')

	ls++;

	for (a = 0; a < ls; a++)
	{
		ls--;
		rev = s[a];
		s[a] = s[ls];
		[ls] = rev;
	}
}
