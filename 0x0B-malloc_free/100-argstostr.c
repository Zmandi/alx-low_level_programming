#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenate all the arguments of the program
 * @ac: int
 * @av: double pointer array
 * Return: a pointer or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int m, n, p = 0, s = 0;

	char *arr;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		s++;
	}

	s += ac;

	arr = malloc(sizeof(char) * s + 1);

	if (arr == NULL)
		return (NULL);
	for (m = 0; m < ac ; m++)
	{

	for (n = 0; av[m][n]; n++)
	{
		arr[p] = av[m][n];
		p++;
	}
	if (arr[p] == '\0')
	{
		arr[p++] = '\n';
	}

	}

	return (arr);
}
