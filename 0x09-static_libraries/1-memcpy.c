#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;

	int t = n;

	for (; m < t; m++)
	{
		dest[m] = src[m];
		n--;
	}

	return (dest);
}
