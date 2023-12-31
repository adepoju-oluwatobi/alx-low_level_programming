#include "main.h"
/**
 * flip_bits - this function returns the number of bits you would need to flip
 * @n: bits
 * @m: bots to flip
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, x = 0;
	unsigned long int y;
	unsigned long int z = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		y = z >> i;
		if (y & 1)
			x++;
	}
	return (x);
}
