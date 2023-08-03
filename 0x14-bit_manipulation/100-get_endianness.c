#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * with no parameters
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
