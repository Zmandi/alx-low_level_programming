#include <stdio.h>
/**
  *main - Prints all possible combinations of two two-digit numbers
  *numbers are in ascending order from 0 to 99
  *Return: Always 0 (Success)
  */
int main(void)
{
	int t,s;

	for (t = 0; t < 100; t++)
	{

	for (s = 0; s < 100; s++)
	{

	if (t < s)
	{

		putchar((t / 10) + '0');
		putchar((t % 10) + '0');
		putchar(' ');
		putchar((s / 10) + '0');
		putchar((s % 10) + '0');

		if (t != 98 || s != 99)
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
