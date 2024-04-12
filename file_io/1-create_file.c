#include "main.h"
#include <string.h>

/**
 * create_file - Function that creates a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on sucess, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
		return (-1);

	/* To open the file and create non-exisitng file. Also specifies file*/
	/* permissions*/

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1); /* if open fails, return -1*/

	/*if text_content is not NULL, we use 'write' to write its content*/
	if (text_content != NULL)
	{ /* use strlen to determine length of string*/
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (-1);
}
