#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, 
 * do not print 2 and 4, followed by a new line
 * description: use _putchar only twice.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}

	_putchar('\n');
}
