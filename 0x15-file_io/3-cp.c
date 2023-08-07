#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

#define BUFFER_SIZE 1024

void print_error(const char *message, int exit_code) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(exit_code);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error("Usage: cp file_from file_to", 97);
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error("Error: Can't read from file", 98);
    }

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) {
        print_error("Error: Can't write to file", 99);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) {
            print_error("Error: Can't write to file", 99);
        }
    }

    if (bytes_read == -1) {
        print_error("Error: Can't read from file", 98);
    }

    if (close(fd_from) == -1) {
        print_error("Error: Can't close fd", 100);
    }

    if (close(fd_to) == -1) {
        print_error("Error: Can't close fd", 100);
    }

    return 0;
}

