#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: 98 if failed, and return a pointer if success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
