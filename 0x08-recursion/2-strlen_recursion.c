#include "main.h"
/**
 * _strlen_recursion - Return the legth of a string
 * @s: string
 * Return: Always 0 (Sucess)
 */
int _strlen_recursion(char *s)
{
	int los = 0;

	if (*s)
	{
		los++;
		los += _strlen_recursion(s + 1);
	}
	return (los);
}
