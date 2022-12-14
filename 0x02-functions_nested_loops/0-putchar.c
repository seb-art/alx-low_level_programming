#include "main.h"

/**
 *main - this is an entry point to the program
 *description : prints putchar follows by a new line
 *Return : return 0 when successful
 */

int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');
	
	return(0);
}
