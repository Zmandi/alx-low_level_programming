#include "main.h"

int actual_prime(int n, int it);

/**
 * is_prime_number - Return 1 if the input integer is a prime number
 *  otherwise return 0
 * @n: integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively calculates if a number is prime
 * @n: number
 * @it: iterator
 * Return: 1 or 0
 */
int actual_prime(int n, int it)
{
	if (it == 1)
		return (1);

	if (n % it == 0 && it > 0)
		return (0);

	return (actual_prime(n, it - 1));
}
