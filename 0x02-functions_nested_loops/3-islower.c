#include "main.h"
/**
  *_islower - Checks if character is lowercase
  *@c: character
  *Return: 1 if c is lowercase, 0 if otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
