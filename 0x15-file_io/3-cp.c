#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void exit_with_error(const char *message, int exit_code)
{
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(exit_code);
}

void check_file_descriptor(int fd, const char *filename)
{
    if (fd == -1)
    {
        exit_with_error(filename, 98);
    }
}

void check_close(int result, int fd)
{
    if (result == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to, close_to, close_from;
    ssize_t lenr, lenw;
    char buffer[1024];
    mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3)
    {
        exit_with_error("Usage: cp file_from file_to", 97);
    }

    fd_from = open(argv[1], O_RDONLY);
    check_file_descriptor(fd_from, argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
    check_file_descriptor(fd_to, argv[2]);

    lenr = BUFFER_SIZE;
    while (lenr == BUFFER_SIZE)
    {
        lenr = read(fd_from, buffer, BUFFER_SIZE);
        check_file_descriptor(lenr, argv[1]);

        lenw = write(fd_to, buffer, lenr);
        if (lenw != lenr)
	{
            lenw = -1;
        }
        check_file_descriptor(lenw, argv[2]);
    }

    close_to = close(fd_to);
    close_from = close(fd_from);
    check_close(close_to, fd_to);
    check_close(close_from, fd_from);

    return 0;
}

