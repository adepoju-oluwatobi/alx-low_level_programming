#include "main.h"

/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */

int main(void)
{
	char letter[] = "_putchar";
	int a = 0;

	while (letter[a] != '\0')
	{
		_putchar(letter[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
