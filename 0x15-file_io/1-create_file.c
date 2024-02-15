#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (n_written = 0; text_content[n_written];)
			n_written++;

		if (write(fd, text_content, n_written) != n_written)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}