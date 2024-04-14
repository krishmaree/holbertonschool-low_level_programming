#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Copies the content of one file to another
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, or an error code
 *
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(EXIT_FAILURE);
	}
	while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, read_bytes) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(EXIT_FAILURE);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(EXIT_FAILURE);
	}

	close(fd_from);
	close(fd_to);
	return (EXIT_SUCCESS);
}
