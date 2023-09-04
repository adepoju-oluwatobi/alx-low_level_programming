#include "main.h"
/**
 * check_IO_status - checks file status
 * @status: fd of the file to be opened
 * @filename: name of the file
 * @perm: closing or opening
 * @fd: file descriptor
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
