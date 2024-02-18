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
	int file;
	int n_write;
	int len = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;

		n_write = write(file, text_content, len);
		if (n_write == -1 || n_write != len)
		{
			close(file);
			return (-1);
		}

	}
	close(file);
	return (1);
}
