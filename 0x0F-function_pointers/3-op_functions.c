#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of two num
 * @a: param
 * @b: param
 *
 * Return: result of  a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that returns the difference of two num
 * @a: param
 * @b: param
 *
 * Return: result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that returns theproduct of two num
 * @a: param
 * @b: param
 *
 * Return: result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that returns the division of two num
 * @a: param
 * @b: param
 *
 * Return: result of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that returns the modulo of two num
 * @a: param
 * @b: param
 *
 * Return: result of a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
