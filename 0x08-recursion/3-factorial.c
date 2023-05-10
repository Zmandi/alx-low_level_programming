#include "main.h"
/**
 * factorial - Returns the factorial of a number
 * @n: given number
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
