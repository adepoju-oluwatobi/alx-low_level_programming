#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int a, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; a < len / 2; a++)
	{
		tmp = s[a];
		s[a] = s[len1];
		s[len1--] = tmp;
	}
}
