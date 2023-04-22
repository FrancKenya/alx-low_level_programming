#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of the two integers
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - difference between two integers
 * @a: first int
 * @b: second int
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	int results = a - b;

	return (results);
}
/**
 * op_mul - multiply two integers
 * @a: first int
 * @b: second int
 *
 * Return: results of the multiplication
 */
int op_mul(int a, int b)
{
	int results = a * b;

	return (results);
}
/**
 * op_div - divide two integers
 * @a: first int
 * @b: second int
 *
 * Return: results of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the modulus between two ints
 * @a: first int
 * @b: second int
 *
 * Return: The modulus between the two
 */
int op_mod(int a, int b)
{
	return (a % b);
}
