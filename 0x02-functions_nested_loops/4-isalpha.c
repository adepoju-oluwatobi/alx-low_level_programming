#include "main.h"
/**
 * _isalpha -  a function that checks for alphabetic character.
 * @c: character
 * Return: 1 if c is letter lower case or upper.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
