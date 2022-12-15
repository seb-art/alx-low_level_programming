#include <main.h>

/**
 * main - entrypoint of the code
 * description : printing _putchar
 * Return : 0
 */

int main (void)
{
	char putchar = "_putchar";
	int i = 0;

	while(putchar[i] != '\0');
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar("\n");

	return(0);
}
