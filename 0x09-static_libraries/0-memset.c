#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: address of maemory to be filled
 * @b: value
 * @n: bytes to be changed
 * Return: new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int v = 0;

	for (; n > 0; v++)
	{
		s[v] = b;
		n--;
	}

	return (s);
}
