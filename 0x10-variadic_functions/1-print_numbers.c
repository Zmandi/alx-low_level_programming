#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers.
 * @separator: to be printed between numbers.
 * @n: number of integers passed to the function
 * @...: remaining numbers to print.
 * If separator is NULL, don’t print it.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int k;

	va_start(numbers, n);
	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(numbers, int));
		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
