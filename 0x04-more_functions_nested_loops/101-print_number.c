#include "main.h"
#include <stdio.h>

/**
 * print_number - This function uses putchar to print numbers
 * @n: The number to be printed
 * Return: void
 */
void print_number(int n)
{
	if (n >= 0)
	{
		if (n / 1000 != 0)
			_putchar(n / 1000 + '0');
		if (n / 100 != 0)
			_putchar(n / 100 % 10 + '0');
		if (n / 10 != 0)
			_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
	_putchar('-');
		if (-(n / 1000) != 0)
			_putchar(n / 1000 + '0');
		if (n / 100 != 0)
			_putchar(-(n / 100) % 10 + '0');
		if (n / 10 != 0)
			_putchar(-(n / 10) % 10 + '0');
		_putchar(-(n) % 10 + '0');
	}
	putchar('\n');
}
