#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - Function for errors
 * @message: error message to be printed
 * @exit_code: The exit code to be used
 */

void print_error_and_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exit_code);
}

/**
 * open_file - Function to Open the file
 * @filename: name of file to be opened
 * @flags: flag statements
 * @mode: permissions for the open call
 *
 * Return: File descriptor of opened file
 */

int open_file(const char *filename, int flags, mode_t mode)
{
	int fd;

	fd = open(filename, flags, mode);
	if (fd == -1)
	{
		perror("open");
		exit(errno);
	}
	return (fd);
}

/**
 * close_file - Function to close file
 * @fd: File descriptor to file to be closed
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		perror("close");
		print_error_and_exit("Can't close fd", 100);
	}
}

/**
 * copy_file - Function for the copying of one file to the other
 * @file_from: File to be copied from
 * @file_to: file to be copied to
 */

void copy_file(const char *file_from, const char *file_to)
{
	char buf[BUF_SIZE];
	ssize_t num_read;
	int fd_from, fd_to;

	fd_from = open_file(file_from, O_RDONLY, 0);
	fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	while ((num_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, num_read) != num_read)
		{
			print_error_and_exit("Can't write to file", 99);
		}
	}
	if (num_read == -1)
	{
		print_error_and_exit("Can't read from file", 98);
	}
	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - main function that checks arguments received and
 * calls the copy function
 *
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error_and_exit("Usage: cp file_from file_to", 97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
