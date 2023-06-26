#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: parameter to swap
 * @b: parameter to swap
 *
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

