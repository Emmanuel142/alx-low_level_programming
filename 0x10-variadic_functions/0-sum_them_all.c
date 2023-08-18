#include "variadic_functions.h"
/**
 * sum_them_all - this function sum up all integer passed into it
 * @n: The num of argument
 * Return: Return (0) if n is 0 and score if n is greater
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int score = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	for (i = 0; i < n; i++)
		score += va_arg(ap, int);
	va_end(ap);
	return (score);
}
