#include<stdio.h>
#include "main.h"

/**
 * print_numbers -prints numbers from 0 - 9
 * Description: you can only use putchar twice
 */

void print_numbers(void)
{
	int j;

	j = 0;
	while (j <10)
	{
		putchar(j);
		j++
	}
	putchar("\n");
}
