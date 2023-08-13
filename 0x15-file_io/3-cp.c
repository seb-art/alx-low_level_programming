#include "main.h"

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
* main -copies contents from one file to the other
* @argc: argument count
* @argv: argument vector
* Return: 1 on success else exit
*/
int main(int argc, char *argv[])
{
	int src, dest, r = 1024, w, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (r == 1024)
	{
		r = read(src, buffer, sizeof(buffer));
		if (r == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		w = write(dest, buffer, r);
		if (w == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}

/**
* check_IO_stat - a function to check if file can be opened or closed
* @stat: file descriptor of file to be opened
* @filename: name of the file
* @mode: closing or opening
* @fd: file descriptor
* Return: nothing
*/
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
