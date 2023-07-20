#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: character to separate numbers
 * @n: numbers to print
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* init va_list to store the values from function variable */
	va_list x;
	unsigned int i; /* int var for loop */

	va_start (x, n); /* passing the values of n to x */

	for (i = 0; i < n; i++) /* loop to print the args */
	{
		printf("%d", va_arg(x, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(x);
	printf("\n");
}
