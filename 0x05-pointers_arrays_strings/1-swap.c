#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
