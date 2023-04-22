#include <stdio.h>
/**
  *main - Entry
  *Description: Prints the alphabets in lowercase
  *Return: Always 0
  */
int main(void)
{
	char aph;

	for (aph = 'a'; aph <= 'z'; aph++)
	{
		putchar(aph);
	}
	putchar('\n');
	return (0);
}
