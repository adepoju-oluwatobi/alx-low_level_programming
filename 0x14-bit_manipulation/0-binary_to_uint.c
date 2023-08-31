#include "main.h"
/**
 * binary_to_uint - function that converts a binary number
 * @b: points to a string bit 0 and 1
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		number <<= 1;
		if (b[i] == '1')
			number += 1;
	}
	return (number);
}
