#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string varible to compare
 * @s2: string variable to compare
 * Return: negative if s1<s2, 0 if matching, positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
