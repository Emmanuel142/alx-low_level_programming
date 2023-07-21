#include  "main.h"
#include <stdio.h>

/**
 * print_number - this function print number from 0-9
 * no input required
 * Return: this function returns void
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
