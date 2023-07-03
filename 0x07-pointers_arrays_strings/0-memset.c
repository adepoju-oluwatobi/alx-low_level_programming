#include "main.h"
/**
 * memset() - a function that fills memory with a constant byte
 * Description: ills the first `n` bytes pointed by `s`
 * @n: variable to fill
 * @b: constant byte
 * @s: a pointer
 * Return: a pointer to the memory area `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int number = 0;

	while (number < n)
	{
		s[number] = b;
		number++;
	}

	return (s);
}
