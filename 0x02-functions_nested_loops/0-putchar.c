#include "main.h"
/**
 * main - a program to print _putchar followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char letters[] = "_putchar";
	int a = 0;

	while (letters[a] != '\0')
	{
		_putchar(letters[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
