#include "main.h"
/**
* read_textfile - a function that reads a text file
* and prints it to the standard output
* @filename: name of the file
* @letters: number of letters to be printed
* Return: number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, r, w;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	r = read(file, buffer, letters);
	if (r == -1)
		return (0);
	buffer[r] = '\0';
	w = write(STDOUT_FILENO, buffer, r);
	if (w != r)
		return (0);
	free(buffer);
	close(file);
	return (r);
}

