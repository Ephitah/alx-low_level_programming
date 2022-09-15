#include "main.h"

/**
 * print_alphabet - Prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char j;
	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
