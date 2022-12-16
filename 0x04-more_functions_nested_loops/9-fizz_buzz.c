#include "main.h"

/**
 * main - mainn entry point, solves fizz buzz from 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz
 * Multiples of both 3 and 5 should print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 == 0)
			printf("FizzBuzz");
		else if (j % 3 == 0)
			printf("Fizz");
		else if (j % 5 == 0)
			printf("Buzz");
		else if (j == 1)
			printf("%d", j);
		else
			printf("%d", j);
	}
	printf("\n");

	return (0);
}
