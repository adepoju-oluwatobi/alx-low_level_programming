#include "main.h"
/**
 * string_toupper - lowercase letters of a string to uppercase.
 * @str: string
 * Return: str
 */
char *string_toupper(char *)
{
	int a = 0;

	while (str[a])
	{
		str[a] = toupper(str[a]);
		a++;
	}
}
