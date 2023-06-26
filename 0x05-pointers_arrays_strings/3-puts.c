#include "main.h"
/**
 * _puts - prints a string to the standard output
 * @str: character from array
 * Description: can use only _putchar
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
