<<<<<<< HEAD
#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of int
 * @a: parameter
 * @n: parameter
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
=======
#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of integers.
 * @a: param
 * @n: param
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
>>>>>>> d99b2a7e9fb2772190d5373214bdef9fdd84cf29
