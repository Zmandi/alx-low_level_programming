#include "main.h"

int actual_sqrt_recursion(int n, int it);

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Find the natural square root of a number
 * in recursion
 * @n: number
 * @it: iterator
 * Return: square root
 */
int actual_sqrt_recursion(int n, int it)
{
	if (it * it > n)
		return (-1);

	if (it * it == n)
		return (it);

	return (actual_sqrt_recursion(n, it + 1));
}
