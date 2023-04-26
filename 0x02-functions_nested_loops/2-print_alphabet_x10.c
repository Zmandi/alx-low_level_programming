#include "main.h"
/**
  *print_alphabet_x10 - Prints the alphabets 10 times in a lowercase
  *Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int t;
	char p;

	for (t = 0; t < 10; t++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
