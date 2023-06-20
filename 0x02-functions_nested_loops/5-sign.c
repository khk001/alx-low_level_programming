#include "main.h"

/**
 *  print_sign - function name
 * @n: The character to be checked.
 *
 * Description: function that prints the sign of a number.
 *
 * Return: 1 if positive, -1 if negative, 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
