#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return a pointer to a new string which is a duplicate of str
 * @str: string
 * Return: a pointer to duplicated string and NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *ray;
	int i, k = 0;

	if (str == NULL)
	return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	ray = malloc(sizeof(char) * (i + 1));

	if (ray == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		ray[k] = str[k];

	return (ray);
}
