#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define ARG_NUM_ERR 97
#define FILE_FROM_ERR 98
#define FILE_TO_ERR 99
#define CLOSE_ERR 100

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

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
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

/**
 * main - copies a text file
 *
 * @argv: vector of arguments
 * @argc: length of the vector
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int file_from;
	int reader, creator, closer;
	char buffer[BUFFER_SIZE];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(ARG_NUM_ERR);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(FILE_FROM_ERR);
	}

	reader = read(file_from, buffer, BUFFER_SIZE);
	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(FILE_FROM_ERR);
	}

	creator = create_file(argv[2], buffer);
	if (creator == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(FILE_TO_ERR);
	}

	closer = close(file_from);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(CLOSE_ERR);
	}
	return (0);

}
