#include "main.h"

/**
 * _sqrt_recursion - evaluate function sqrt
 * @i: integer
 * @n: integer
 * Return: suare root of a number
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_evaluate(i + 1, n));

	else if (i * i == n)
		return (i);
	return (-1);
	return (-1);
}
