#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX standard output.
 * @filename: (pointer) name of the file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 * or 0 if the file can not be opened or read, filename is NULL
 * or write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fd_read, fd_write;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(*buf) * letters);
	if (!buf)
		return (0);

	fd_read = read(fd, buf, letters);
	if (fd_read == -1)
	{
		free(buf);
		return (0);
	}

	fd_write = write(STDOUT_FILENO, buf, fd_read);
	if (fd_write == -1 || fd_write != fd_read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (fd_write);
}
