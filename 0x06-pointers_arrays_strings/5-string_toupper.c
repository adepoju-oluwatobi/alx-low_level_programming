#include "main.h"
/**
 * string_toupper - lowercase letters of a string to uppercase.
 * @c: string
 * Return: c
 */
char *string_toupper(char *c)
{
	int a = 0;

	while (c[a])
	{
		c[a] = toupper(c[a]);
		a++;
	}
}
