#include <stdio.h>
/**
 * main - outputs first 50
 * fibonacci nums
 * Return: return 0
 */
int main(void)
{
	int t;
	unsigned long n1 = 0, n2 = 1, n3;

	for (t = 0; t < 50; t++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;
	if (t == 49)
		printf("\n");
	else
		printf(", ");
	}
	return (0);
}#include <stdio.h>
/**
 * main - outputs first 50
 * fibonacci nums
 * Return: return 0
 */
int main(void)
{
	int t;
	unsigned long n1 = 0, n2 = 1, n3;

	for (t = 0; t < 50; t++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;
	if (t == 49)
		printf("\n");
	else
		printf(", ");
	}
	return (0);
}
