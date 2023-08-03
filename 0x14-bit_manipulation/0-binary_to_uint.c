#include "main.h"
/**
 * int binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: points to a string bit 0 and 1
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int loop;
	unsigned int number = 0;

	if (!b)
		return (0);
	for (loop = 0; b[loop] != '\0'; loop++)
	{
		if (b[loop] != '0' && b[loop] != '1')
			return (0);
	}
	for (loop = 0; b[loop] != '\0'; loop++)
	{
		number <<= 1;
		if (b[loop] == '1')
			number += 1;
	}
	return (number);
}
