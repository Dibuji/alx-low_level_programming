#include <unistd.h>

/**
 * main - Print to standard error
 * Return: 0
 */

int main(void)
{
	const char*
		message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write
		(STDERR_FILENO, message, 59);
	return (1);
}
