#include "main.h"
/**
 *_memcpy - function that copies memory area.
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
