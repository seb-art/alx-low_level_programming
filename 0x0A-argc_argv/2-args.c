#include <stdio.h>

/**
 * main - prints all arguments it receives per line, & \n
 * @argc: count args passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit code 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
