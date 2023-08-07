#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: File to read
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	ssize_t bytes_read, bytes_write;

	if (filename == NULL)
	return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file);
		return (0);
	}

	bytes_read = read(file, buf, letters);
	close(file);

	if (bytes_read == -1)
	{
		free(buf);
		return (0);
	}

	bytes_write = write(STDOUT_FILENO, buf, bytes_read);
	free(buf);

	if (bytes_write != bytes_read)
		return (0);

	return (bytes_write);
}
