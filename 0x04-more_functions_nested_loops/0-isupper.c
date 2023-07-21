#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if the value is in Uppercas
 * @c: this is the input we are checking if it is uppercase
 * Return: always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
