#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - Allocate memory using malloc
 * @b: memory size to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
