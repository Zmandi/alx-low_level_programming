#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Print the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int nmb, f, res;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nmb = atoi(argv[1]);
	res = 0;

	if (nmb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (f = 0; f < 5 && nmb >= 0; f++)
	{
		while (nmb >= coins[f])

		{

		res++;
		nmb -= coins[f];

		}
	}
	printf("%d\n", res);

	return (0);
}
