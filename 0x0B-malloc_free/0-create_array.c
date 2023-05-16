#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Create an array of chars
 * initialize it with a specific char
 * @size: size of array
 * @c: char
 * Return:pointer to array; NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
