#include <stdio.h>
/**
  *main - Prints base 16 numbers in lowercase
  *Return: Always 0
  */
int main(void)
{
	int n;
	int aph;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (aph = 'a'; aph <= 'f'; aph++)
	{
		putchar(aph);
	}
	putchar('\n');
	return (0);
}
