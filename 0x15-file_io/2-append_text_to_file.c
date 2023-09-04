#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content:  is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	if (text_content)
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
