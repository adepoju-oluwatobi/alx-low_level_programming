#include "main.h"
/**
 * _memcpy() - a function that copies memory area.
 * Description: function copies `n` bytes from memory area `src` to memory area `dest`
 * @n: variable to copy
 * @src: variable to copy from
 * @dest: variable to copy to
 * Return: `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int number;

	for (number = 0; number < n; number++)
	{
		dest[number] = src[number];
	}

	return (dest);
}
