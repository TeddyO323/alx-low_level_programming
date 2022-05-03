#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append to the file
 * Return: 1 Success or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;
	ssize_t res_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		res_write = write(fd, text_content, length);

		if (res_write < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
