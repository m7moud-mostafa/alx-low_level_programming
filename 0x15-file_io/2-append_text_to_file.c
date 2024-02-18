#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int n_write, len = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
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
	return(1);
}
