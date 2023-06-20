#include "main.h"

/**
 *  print_last_digit - function name
 * @num: The integer to be checked.
 *
 * Description: function that prints the last digit of a number.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if (ld < 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
}
