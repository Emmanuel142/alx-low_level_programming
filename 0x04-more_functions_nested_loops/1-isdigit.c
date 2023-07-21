#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if c is a number between 0 - 9
 * Return: 1 if isdigit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
