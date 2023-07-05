#include "main.h"
/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: A string variable
 * Return: 0 if `s` is empty
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
