#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print,
 * or 0 if file cannot be opened or read
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_read);
}
