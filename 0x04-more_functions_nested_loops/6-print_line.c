#include "main.h"
#include <stdio.h>

/**
 * print_line - this function print lines on the screen
 * @n: The number of n is the legth of the line if 0 or lesser
 * only newline will be printed
 * Return: No return type
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			putchar('_');
	}
	putchar('\n');
}
