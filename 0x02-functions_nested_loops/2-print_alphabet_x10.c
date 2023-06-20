#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 *
 * Description: This function prints the alphabet in lowercase 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
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
