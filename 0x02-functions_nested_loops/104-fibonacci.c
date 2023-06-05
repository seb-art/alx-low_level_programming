#include <stdio.h>
/**
* main - entry to the program
* Return: 0(always success)
*/

int main(void)
{
	unsigned long num1 = 0, num2 = 1, num3 = 0;
	unsigned long num1x, num1y, num2x, num2y, num3x, num3y;
	int i;

	for (i = 0; i < 92; i++)
	{
		num3 = num1 + num2;
		printf("%lu, ", num3);
		num1 = num2;
		num2 = num3;
	}
	num1x = num1 / 10000000000;
	num1y = num1 % 10000000000;

	num2x = num2 / 10000000000;
	num2y = num2 % 10000000000;
	for (i = 92; i < 98; i++)
	{
		num3x = num1x + num2x;
		num3y = num1y + num2y;
		if (num3y > 10000000000)
		{
			num3x = num3x + 1;
			num3y = num3y % 10000000000;
		}
		if (i < 97)
		{
			printf("%lu%lu, ", num3x, num3y);
			num1x = num2x;
			num1y = num2y;
			num2x = num3x;
			num2y = num3y;
		}
		else
		{
			printf("%lu%lu\n", num3x, num3y);
		}
	}
	return (0);
}
