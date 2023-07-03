#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string `s`
 * @s: variable containing complete string
 * @accept: variable to search
 * Return:  a pointer to the byte in `s`
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	int c;

	a = 0;
	c = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;
		a++;
	}
	return (c);
}

