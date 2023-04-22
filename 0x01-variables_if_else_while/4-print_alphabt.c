#include <stdio.h>
/**
  *main - Prints lowercase alphabets
  *except q and e
  *Return: Always 0
  */
int main(void)
{
	char aph;

	for (aph = 'a'; aph <= 'z'; aph++)
	{
		if (aph != 'e' && aph != 'q')
			putchar(aph);
	}

	putchar('\n');

	return (0);
}
