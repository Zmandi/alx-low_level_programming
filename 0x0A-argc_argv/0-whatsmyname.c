#include <stdio.h>
#include "main.h"
/**
 * main - Print name of program
 * if file is renamed, print the new name without compiling again
 * @argc: the number of argument
 * @argv: array of strings
 * Result: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
