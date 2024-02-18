#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n_read, n_write;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
	if (!filename)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	n_read = read(file, buffer, letters);
	if (n_read == -1)
	{
		return (0);
	}

	n_write = write(STDOUT_FILENO, buffer, n_read);
	free(buffer);
	close(file);

	if (n_write == -1 || n_read != n_write)
	{
		return (0);
	}

	return (n_write);
}
