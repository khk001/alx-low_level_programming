#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: parameter
 * @b: parameter
 * @n: parameter
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
