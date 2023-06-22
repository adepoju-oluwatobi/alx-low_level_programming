#include "main.h"
/**
 * _isdigit - a function that checks from (0 to 9)
 * @c: character goten from prototype
 * Return: 1 if c is a number, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);

	return(0);
}
