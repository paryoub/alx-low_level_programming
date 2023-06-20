#include "main.h"

/**
 * print_alphabet - print alphabet use
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int n;

	for (n = 97 ; n <= 122 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
