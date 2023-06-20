#include "main.h"

/**
 * print_alphabet - Prints 10 the alphabet in lowercase.
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
