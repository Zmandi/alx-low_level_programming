#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenate two strings
 * pointer should point to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ccat;
	int i, q;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = q = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[q] != '\0')
		q++;
	ccat = malloc(sizeof(char) * (i + q + 1));

	if (ccat == NULL)
		return (NULL);

	i = q = 0;
	while (s1[i] != '\0')
	{
		ccat[i] = s1[i];
		i++;
	}

	while (s2[q] != '\0')
	{
		ccat[i] = s2[q];

		i++, q++;
	}
	ccat[i] = '\0';

	return (ccat);
}
