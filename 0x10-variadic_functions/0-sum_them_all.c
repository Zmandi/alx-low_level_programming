#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: number of parameters passed to the function.
 * @...: remaining parameters to calculate.
 * Return: 0 if n == 0; otherwise, the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list amt;
	unsigned int i, sum = 0;

	va_start(amt, n);
	for (i = 0; i < n; i++)
		sum += va_arg(amt, int);
	va_end(amt);
	return (sum);
}
