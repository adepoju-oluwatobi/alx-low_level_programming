#include <stdio.h>
/**
 * main - a program to print _putchar followed by a new line
 */
int main(void)
{
	char letters[8] = "_putchar";
	int a;

	for(a = 0; a < 8; a++)
	{
		putchar(letters[a]);
	}
	return (0);
}
