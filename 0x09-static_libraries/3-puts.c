#include "main.h"

/**
 * _puts - function that prints a string
 * @str: parameter
 *
 * Return: 0 (success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
