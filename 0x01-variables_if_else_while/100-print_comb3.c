#include <stdio.h>
/**
  *main - Prints  all possible different combinations of two digits
  *the smallest combination of two digits in ascending order
  *Return: Always 0 (Success)
  */
int main(void)
{
	int d, g;

	for (d = '0'; d <= '9'; d++)
	{

	for (g = '0'; g <= '9'; g++)
	{

	if (d < g)
	{
		putchar(d);
		putchar(g);

		if (d != '8' || g != '9')

		{
			putchar(',');
			putchar(' ');

		}

	}

	}

	}
	putchar('\n');

	return (0);
}
