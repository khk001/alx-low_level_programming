#include "main.h"

/**
 * print_ten_time_the_alphabet - Prints 10 times the alphabet in lowercase.
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
