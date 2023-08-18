#include <stdio.h>
#include <stdlib.h>

/**
 * main - bare minimal number of coins for change followed by \n
 * @argc: count args passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit code 0
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		else if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		else if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		else if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
