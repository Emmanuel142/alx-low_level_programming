#include "main.h"
int _pow_recursion(int x, int y);
/**
 * _pow_recursion - power of an interger
 * @x: the base
 * @y: the power
 * Return: return the power if negative and positive and 1
 * if the power is 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y < 0)
		return (1 / _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
