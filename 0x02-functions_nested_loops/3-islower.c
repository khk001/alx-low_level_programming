#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked.
 *
 * Description: function that checks for lowercase character.
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
