#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute a function given as a parameter on each array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function needed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
