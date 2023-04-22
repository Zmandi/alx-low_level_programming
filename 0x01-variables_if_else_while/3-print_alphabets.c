#include <stdio.h>
/**
  *main - Prints the alphabet in lower and uppercase
  *Return: Always 0
  */
int main(void)
{
	char lua;

	for (lua = 'a'; lua <= 'z'; lua++)
		putchar(lua);

	for (lua = 'A'; lua <= 'Z'; lua++)
		putchar(lua);

	putchar('\n');

	return (0);
}
