#include "main.h"

/**
 * main - Entry point
 *
 * description: function that prints the alphabet in lowercase
 *
 * Return: 0 for successful execution
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
