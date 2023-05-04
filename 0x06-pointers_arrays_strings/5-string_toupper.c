#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n : pointer
 * Return: Always 0
 */
char *string_toupper(char *n)
{
	int t;

	for (t = 0; n[t] != '\0'; t++)
	{
		if (n[t] >= 'a' && n[t] <= 'z')
		{
			n[t] = n[t] - ('a' - 'A');
		}
	}

	return (n);
}
