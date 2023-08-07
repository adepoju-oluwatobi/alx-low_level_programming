#include "main.h"

/**
* file_err - checks if files can be opened
* @file_from: first argv
* @file_to: second argv
* @argv: arguments values
* Return: nothing
*/

void file_err(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - a program that copies the content of a file to another file.
* @argc: argument count
* @argv: arguments value
* Return: 0
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t bytes_read, bytes_written;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_err(file_from, file_to, argv);
	bytes_read = 1024;

	while (bytes_read == 1024)
	{
		bytes_read = read(file_from, buf, 1024);
		if (bytes_read == -1)
			file_err(-1, 0, argv);
		bytes_written = write(file_to, buf, bytes_read);
		if (bytes_written == -1)
			file_err(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
