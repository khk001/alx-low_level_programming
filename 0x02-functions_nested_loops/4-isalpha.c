#include "main.h"

/**
 *  _isalpha - function name
 * @c: The character to be checked.
 *
 * Description: function that checks for alphabetic character.
 *
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
