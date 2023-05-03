#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array of integer
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as stored in the array
 * @a: array name
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}
		if (c == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
