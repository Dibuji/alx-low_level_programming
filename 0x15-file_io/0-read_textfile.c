#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 *
 * @filename: Name of the File
 * @letters: number of letters
 *
 * Return: Actual Number of letters Read and Printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t	fd, read_v, write_v;
	char *buff_temp;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff_temp = malloc(sizeof(char) * letters);

	read_v = read(fd, buff_temp, letters);

	write_v = write(STDOUT_FILENO, buff_temp, read_v);

	close(fd);

	free(buff_temp);

	return (write_v);
}
