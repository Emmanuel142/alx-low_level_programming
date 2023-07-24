#include "main.h"
/**
 * print_rev - this function print the reverse of its input to the standard
 * output
 * @s: the input string
 * Return: no return value (void)
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; i < s; i++)
	{
		if (i == *s)
		{
			for (j = 0; j < i; j--)
				_putchar(s[i]);
		}
	}
	_putchar('\n');
}
