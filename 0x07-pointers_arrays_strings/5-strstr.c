#include "main.h"

/**
 * _strstr - function name
 * @haystack: first parameter
 * @needle: second parameter
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0;
	int k = 0;

	while (haystack[j])
	{
		while (needle[k])
		{
			if (haystack[j + k] != needle[k])
			{
				break;
			}
			k++;
		}
		if (needle[k] == '\0')
		{
			return (haystack + j);
		}
		j++;
	}
	return ('\0');
}
