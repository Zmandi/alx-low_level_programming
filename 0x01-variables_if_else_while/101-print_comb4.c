#include <stdio.h>
/**
  *main - Prints all possible different combinations of three digits
  *Prints only the smallest combination of three digits in ascending order
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{

	for (j = '1'; j <= '9'; j++)
	{

	for (k = '1'; k <= '9'; k++)
	{

	if (k > j && j > i)
	{

		putchar(i);
		putchar(j);
		putchar(k);

		if (i != '7' || j != '8')

		{
			putchar(',');
			putchar(' ');
		}

	}

	}

	}

	}

		putchar('\n');

	return (0);
}
