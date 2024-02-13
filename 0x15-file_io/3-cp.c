
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void close_file(int fd) {
    int c;

    c = close(fd);
    if (c == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char *argv[]) {
    int file_from, file_to, read_bytes, wrote_bytes;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from < 0) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (file_to < 0) {
        close_file(file_from);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0) {
        wrote_bytes = write(file_to, buffer, read_bytes);
        if (wrote_bytes != read_bytes) {
            close_file(file_from);
            close_file(file_to);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (read_bytes == -1) {
        close_file(file_from);
        close_file(file_to);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    close_file(file_from);
    close_file(file_to);
    return (0);
}
