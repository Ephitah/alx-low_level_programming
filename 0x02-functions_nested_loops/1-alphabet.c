#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch = 'a';
	for (ch < 'z')
	{
		ch++;
		putchar(ch);

		putchar("\n");
	}

	return ();
}
