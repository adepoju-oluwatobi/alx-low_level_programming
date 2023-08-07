#include "main.h"
/**
 * print_err - a function that prints error msg and code
 * @msg: error message
 * @code: error code
 * Return: nothing
 */
void print_err(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}
