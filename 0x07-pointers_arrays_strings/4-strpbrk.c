#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string `s`
 * @s: variable containing complete string
 * @accept: variable to search
 * Return:  a pointer to the byte in `s`
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *p;
	
	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
			b++;
		}
		a++;
	}

	return (0);
}
