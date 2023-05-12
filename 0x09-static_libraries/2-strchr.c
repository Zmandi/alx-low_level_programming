#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int v = 0;

	for (; s[v] >= '\0'; v++)
	{
		if (s[v] == c)

		return (&s[v]);
	}
	return (0);
}
