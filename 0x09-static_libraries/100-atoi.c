#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * The number in the string can be preceded by an infinite number of characters
 * @s: string
 * Return: integer or 0
 */
int _atoi(char *s)
{
	int sign = 1, m = 0;

	unsigned int res = 0;

	while (!(s[m] <= '9' && s[m] >= '0') && s[m] != '\0')
	{
		if (s[m] == '-')
		sign *= -1;

		m++;
	}

	while (s[m] <= '9' && (s[m] >= '0' && s[m] != '\0'))
	{
		res = (res * 10) + (s[m] - '0');
		m++;
	}

	res *= sign;

	return (res);
}
