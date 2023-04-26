#include "main.h"
/**
 *_abs - Computes the absolute value of an integer
 *@v: integer to check
 *Return: absolute value
 */
int _abs(int v)
{
	if (v >= 0)
	{
		return (v);
	}
	else
	{
		return (v * -1);
	}
}
