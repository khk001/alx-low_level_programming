#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: parameter
 *
 * return: 0
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; o > 0; b--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
