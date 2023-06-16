#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int num = 122;

	while (num >= 97)
	{
		putchar(num);
		num--;
	}
	putchar('\n');
	return (0);
}
