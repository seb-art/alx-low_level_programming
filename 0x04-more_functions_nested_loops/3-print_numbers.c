#include<stdio.h>
#include "main.h"

/**
 * print_numbers -prints numbers from 0 to 9
 * Description: you can only use putchar twice
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x <58; x++)
	{
		putchar(x);
	}
	putchar(10,"\n");
}
