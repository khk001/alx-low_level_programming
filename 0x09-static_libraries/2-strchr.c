#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that searches for the first
 * occurrence of a specific character and returns a pointer to it
 * @s: parameter
 * @c: paramter
 *
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
