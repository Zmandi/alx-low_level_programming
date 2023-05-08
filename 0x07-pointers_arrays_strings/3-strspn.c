#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string to search
 * @accept: contains characters to be searched for
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int l;

	while (*s)
	{

	for (l = 0; accept[l]; l++)
	{
		if (*s == accept[l])
		{

		n++;

		break;
		}

		else if (accept[l + 1] == '\0')

		return (n);
	}

	s++;
	}
	return (n);
}
