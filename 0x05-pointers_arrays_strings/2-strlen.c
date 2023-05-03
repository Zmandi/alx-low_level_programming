#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int ls = 0;

	while
	(*s != '\0')
	{
		ls++;
		s++;
	}
	return (ls);
}
