#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: first array
 * @height: second array
 * Return: pointer or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **dim;
	int m, n;

	if (width <= 0 || height <= 0)
	return (NULL);

	dim = malloc(sizeof(int *) * height);
	if (dim == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
	dim[m] = malloc(sizeof(int) * width);

	if (dim[m] == NULL)
	{
		for (; m >= 0; m--)
		free(dim[m]);

		free(dim);
		return (NULL);
	}

	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			dim[m][n] = 0;
	}

	return (dim);
}
