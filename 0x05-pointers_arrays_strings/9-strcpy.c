#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: parameter
 * @src: parameter
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; x < i ; j++)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
