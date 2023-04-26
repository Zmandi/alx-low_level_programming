#include "main.h"
/**
  *print_alphabet - Prints the alphabet in lowercase
  *Result: Always 0 (Success)
  */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);

	}
	_putchar('\n');
