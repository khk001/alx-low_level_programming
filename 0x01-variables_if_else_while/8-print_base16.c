#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int num;
	int alph;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (alph = 97; alph <= 102; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
