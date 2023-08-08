#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024;
/**
 * main - a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from;
	int fd_to;
	ssize_t read_from, written_to;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "%s", "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "%s", "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((read_from = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		written_to = write(fd_to, buf, read_from);

		if (written_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (read_from == -1)
	{
		dprintf(STDERR_FILENO, "%s", "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "%s", "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "%s", "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
