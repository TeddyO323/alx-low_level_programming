#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard out
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: quantity of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t q_read, q_write;
	int fd; /* file descriptor */
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0);

	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	q_read = read(fd, buffer, letters);
	close(fd);

	if (q_read < 0)
	{
		free(buffer);
		return (0);
	}

	q_write = write(STDOUT_FILENO, buffer, q_read);
	free(buffer);

	if (q_read != q_write)
		return (0);

	return (q_write);
}
