#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - f name
 * @n: print from
 *
 * Description: function that prints all natural numbers
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	printf("\n");
}
