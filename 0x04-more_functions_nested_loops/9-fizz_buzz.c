#include <stdio.h>
/**
 * main - Prints numbers from 1 to 100
 * Print 'Fizz' in place of multiples of 3
 * Print 'Buzz' for multiples of 5
 * 'FizzBuzz' for multiples of both 3 and 5
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz ");

		} else if (a % 5 == 0 && a % 3 != 0)
		{
			printf("Buzz ");

		} else if (a % 3 ==0  && a % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (a == 1)
		{
			printf("%d ", a);
		} else 
		{
			printf("%d ", a);
		
		}
	}

	printf("\n");

	return (0);

}
