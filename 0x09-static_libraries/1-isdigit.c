#include "main.h"

/**
 * _isdigit - Checks for digits from 0 to 9
 * @c: integer
 * Return: 1 otherwise, 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
