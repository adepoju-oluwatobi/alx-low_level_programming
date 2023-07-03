#include "main.h"
/**
 * memset() - a function that fills memory with a constant byte
 * Description: The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @n: variable to fill
 * @b: constant byte
 * @s: a pointer
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int number;

	for (number = 0; number < n; number++)
	{
		s[number] = b;
	}

	return (s);
}
