#include <stdio.h>

/**
 * main - prints the count of args passed, followed by \n
 * @argc: count args passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit code 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
