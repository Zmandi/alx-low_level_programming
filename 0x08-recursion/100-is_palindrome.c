#include "main.h"

int check_pal(char *s, int it, int los);

int _strlen_recursion(char *s);

/**
 * is_palindrome - Return 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check the characters in recursion for palindrome
 * @s: string
 * @it: iterator
 * @los: length of string
 * Return: 1 or 0
 */
int check_pal(char *s, int it, int los)
{
	if (*(s + it) != *(s + los - 1))
		return (0);

	if (it >= los)
		return (1);

	return (check_pal(s, it + 1, los - 1));
}
