#include "main.h"

/**
 * _strncpy -  a function that copies a string.
 * @dest: string to copy
 * @src: variable containing main string
 * @n: variable to contain the copied string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; n > a; a++)
		dest[a] = '\0';

	return (dest);
}
