#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
