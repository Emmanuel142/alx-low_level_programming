#include "main.h"
int factorial(int n);
/**
 * factorial - This function return the factorial ! of a number
 * @n: The argument
 * Return: returns -1 if less than 0, 1 if equals to 0
 * and the factorial if greater than 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
