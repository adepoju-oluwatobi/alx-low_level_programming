#include "main.h"
/**
 * _strlen - returns the lenght of string
 * @s: string to work with
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
