#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string `s`
 * @s: variable containing complete string
 * @accept: variable to search
 * Return:  a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[a] != '\0')
	{
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

