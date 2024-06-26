#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of the file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if text_content is not NULL, it calculates the length of string*/
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		i++;
	}

	bytes_written = write(fd, text_content, i);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
		close(fd);
		return (1);
}
