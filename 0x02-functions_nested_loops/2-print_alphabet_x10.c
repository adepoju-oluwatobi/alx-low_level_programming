#include "main.h"
/**
 * print_alphabet_x10 - a function to  prints 10 times the alphabet.
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
	int a = 0, b;

	while (a < 10)
	{
		char alph[26] = "abcdefghijklmnopqrstuvwxyz";
		b = 0;
		while (b < 26)
		{
			putchar(alph[b]);
			b++;
		}
		putchar('\n');
		a++;
	}
}
