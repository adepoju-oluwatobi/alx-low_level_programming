#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @n: number variable to print
 * @separator: character to separate numbers
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start (x, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(x);
	printf("\n");
}
