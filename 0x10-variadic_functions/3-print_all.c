#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *str, *separator = "";
	va_list stuff;

	va_start(stuff, format);

	if (format)
		{
		while (format[k])
		{
		switch (format[k])
		{
		case 'c':
			printf("%s%c", separator, va_arg(stuff, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(stuff, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(stuff, double));
			break;
		case 's':
			str = va_arg(stuff, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		default:
		k++;
		continue;

		}
		separator = ", ";
		k++;
	}
	}
	printf("\n");
	va_end(stuff);
}
