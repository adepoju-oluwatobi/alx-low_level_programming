#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string variable
 * Return: the lenght of string
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s == '\0')
		return (0);

	lenght = 1 + _strlen_recursion(s + 1);

	return (lenght);
}
