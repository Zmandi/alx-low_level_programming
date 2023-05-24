#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int nbytes, k;

	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (k = 0; k < nbytes; k++)
	{
		if (k == nbytes - 1)
		{
			printf("%02hhx\n", ptr[k]);
			break;
		}
		printf("%02hhx\n", ptr[k]);
	}
	return (0);
}
