#include "main.h"

/**
 * _isupper - function to check the uppercase of characters
 * @c: character gotten from prototype
 * Return: 1 if c is upercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
