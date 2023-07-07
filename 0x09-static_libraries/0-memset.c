#include "main.h"
/**
 * _memset - function that  fills a block of memory with a specific value
 * @s: param
 * @b: param
 * @n: param
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
