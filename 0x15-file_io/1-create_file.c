#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 Succes or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	int buffer, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		buffer = write(fd, text_content, i);

		if (buffer < 0)
			return (-1);
	}

	close(fd);

	return (1);
}
