#include "main.h"

/**
 * get_endianness - function that checks if a machine is little or big endian
 * with no parameters
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
