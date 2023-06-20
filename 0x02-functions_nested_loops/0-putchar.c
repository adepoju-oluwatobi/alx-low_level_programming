#include "main.h"
/**
 * main - a program to print _putchar followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char letters[8] = "_putchar";
	int a = 0;

	while (letters[0] < 8)
	{
		_putchar(letters[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
