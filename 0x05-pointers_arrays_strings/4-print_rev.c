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

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
