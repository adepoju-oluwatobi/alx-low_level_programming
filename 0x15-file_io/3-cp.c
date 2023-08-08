#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_status(int status, int fd, char *filename, char perm);
/**
 * main - copies the content of one file to the other
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read = 1024, bytes_written, close_file_from, close_file_to;
	unsigned int perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	check_IO_status(file_from, -1, argv[1], 'O');
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
	check_IO_status(file_to, -1, argv[2], 'W');
	while (bytes_read == 1024)
	{
		bytes_read = read(file_from, buffer, sizeof(buffer));
		if (bytes_read == -1)
			check_IO_status(-1, -1, argv[1], 'O');
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			check_IO_status(-1, -1, argv[2], 'W');
	}
	close_file_from = close(file_from);
	check_IO_status(close_file_from, file_from, NULL, 'C');
	close_file_to = close(file_to);
	check_IO_status(close_file_to, file_to, NULL, 'C');
	return (0);
}

/**
 * check_IO_status - checks if a file can be opened or closed
 * @status: file descriptor of the file to be opened
 * @filename: name of the file
 * @perm: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_IO_status(int status, int fd, char *filename, char perm)
{
	if (perm == 'C' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (perm == 'O' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (perm == 'W' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
