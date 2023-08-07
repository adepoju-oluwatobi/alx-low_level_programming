#include "main.h"
#include "print_error.c"
/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: arggument values
 * Return: 0 on success and -1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_err("Usage: cp file_from file_to", 97);

	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fp_from;
	int fp_to;
	ssize_t bytes_written, bytes_read;

	fp_from = open(file_from, O_RDONLY);

	if(fp_from == -1)
		print_err("Error: Can't read from file", 98);

	fp_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWGRP | S_IROTH);
	if (fp_to == -1)
		print_err("Error: Can't write to file", 99);

	char buf[1024];

	while ((bytes_read = read(fp_from, buf, BUFFER_SIZE)) > 0)
	{
		if (bytes_read == -1)
                print_err("Error: Can't read from file", 98);

		bytes_written = write(fp_to, buf, bytes_read);

		if (bytes_written == -1)
			print_err("Error: Can't write to file", 99);
	}
	if (close(fp_from) == -1)
		print_err("Error: Can't close fd", 100);

	if (close(fp_to) == -1)
		print_err("Error: Can't close fd", 100);

	return (0);
}
