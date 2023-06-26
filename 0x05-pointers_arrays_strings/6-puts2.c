#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: param
 *
 * Return: 0
 */
void puts2(char *str)
{
	int len = 0;
	int index = 0;
	char *p = str;
	int i;

	while (*p != '\0')
	{
		p++;
		len++;
	}
	index = len - 1;
	for (i = 0 ; i <= index ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
