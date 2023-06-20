#include "main.h"
/**
 * main - program to print alphabet in lowercase
 *
 * Return - Always 0
 */
void print_alphabet(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

        for(a = 0; a < 26; a++)
        {
                _putchar(alph[a]);
        }
        _putchar('\n');
	return (0);
}
