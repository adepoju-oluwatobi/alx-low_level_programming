#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: Holds the content of the file.
 * Return: 1 on success and -1 if filename is null
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_desc, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
		
