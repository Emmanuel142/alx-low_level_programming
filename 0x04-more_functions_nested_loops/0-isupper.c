#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if the value is in Uppercase
 * Return: always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else return (0);
}
