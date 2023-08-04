#include "main.h"
/**
 * _sqrt_recursion - This function finds the;square root of an absolute number
 * @n: The input
 * Return: square root of n
 */
int _sqrt_recursion(int n);

int findIntegerSquareRoot(int n, int start, int end)
{
	int mid = start + (end - start) / 2;
	int square = mid * mid;

	if (start > end)
		return (end);

	else if (square == n)
		return (mid);

	else if (square < n)
		return (findIntegerSquareRoot(n, mid + 1, end));
	else
		return (findIntegerSquareRoot(n, start, mid - 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	int start = 0;
	int end = n;

	return (findIntegerSquareRoot(n, start, end));
}
