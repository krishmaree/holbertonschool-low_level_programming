#include "main.h"

/**
 * main - entry point
 * @ac: argument count
 * @av: array of argument tokens
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to, num_bytes, w;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZ]; /*use custom buffer size*/

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);/*opens source file for reading*/
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	/*open or create destination file for writing, truncate if existing*/
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fd_from);
		exit(99);
	}
	/*Read from source and write to dest*/
	num_bytes = 1;
	while (num_bytes)
	{
		num_bytes = read(fd_from, buffer, BUFSIZ);
		if (num_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}
		if (num_bytes > 0)
		{
			w = write(fd_to, buffer, num_bytes);
			if (w != num_bytes || w == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				close(fd_from);
				close(fd_to);
				exit(99);
			}
		}
	}
	/* Close file descriptors*/
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0); /* Success */
}
