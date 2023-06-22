#include "main.h"

/**
 * main - check the code.
 * @c: character gotten from prototype.
 * Return: 1 if c is upercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(1);

	return(0);
}
