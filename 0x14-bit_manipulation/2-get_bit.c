#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer
 * @index: index of integer
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/** x is the divisor and y is the check variable */
	unsigned long int x, y;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	y = n & x;
	if (y = x)
		return (1);
	return (0);
}
