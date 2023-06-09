#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: string to add at end of file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_v;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, text_content);

	if (text_content != NULL)
	{
		write_v = write(fd, text_content, strlen(text_content));

		if (write_v == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
