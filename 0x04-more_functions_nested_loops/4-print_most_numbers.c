#include "main.h"
#include <stdio.h>

/**
 * print_most_number - This function print 1-9 with the exemption of 2 and 4
 * Return: No return value
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= 9; i++)
	{
		if(i == 2 || i == 4)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
