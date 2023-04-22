#include <stdio.h>
/**
  *main - Prints the lowercase alphabet in reverse
  *Return: Always 0
  */
int main(void)
{
	int rnm = 'z';

	while (rnm >= 'a')
	{
		putchar(rnm);
		rnm--;
	}
	putchar('\n');

	return (0);
}
