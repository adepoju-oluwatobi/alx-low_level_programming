#include "main.h"

/**
 * print_numbers - print numbers from (0 to 9),
 * followed by a new line
 */

void print_numbers(void)
{
	char num[10] = '01234567890';
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(num[a]);
	}
	_putchar('\n');
}
