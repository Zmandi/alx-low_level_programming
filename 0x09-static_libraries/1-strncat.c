#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: value
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, q;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}

	q = 0;
	while (q < n && src[q] != '\0')
	{
	dest[p] = src[q];
	p++;
	q++;
	}

	dest[p] = '\0';

	return (dest);
}
