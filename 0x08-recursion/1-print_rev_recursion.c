#include "main.h"
void _print_rev_recursion(char *s);
/**
 * _print_rev_recursion - This function print to the standard
 * output in reverse
 * @s: The string of characters
 * Return: return void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
