#include "main.h"
/**
 * raise_to_power - a function that finds the exponential value
 * of a number.
 * @base: The base number
 * @exponent: The exponential value
 * Return: result
 */
int raise_to_power(int base, int exponent)
{
	int result = pow(base, exponent);

	return (result);
}
