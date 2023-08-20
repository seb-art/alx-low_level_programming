#include <stdio.h>
#include <math.h>

/**
  * main - start code
  *
  * Return: Always 0 ()success
  */
int main(void)
{
	int hcfactor;
	long number = 612852475143;

	for (hcfactor = (int) sqrt(number); hcfactor > 2; hcfactor++)
	{
		if (number % hcfactor == 0)
		{
			printf("%d\n", hcfactor);
			break;
		}
	}

	return (0);
}
