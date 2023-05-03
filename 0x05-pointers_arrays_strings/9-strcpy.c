#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: string destination
 * @src: copies string
 * Return:  pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int n = 0;

	while (*(src + d) != '\0')
	{
		d++;
	}
	for (; n < d; n++)
	{
		dest[n]	 = src[n];
	}
	dest[d] = '\0';
	return (dest);
}
