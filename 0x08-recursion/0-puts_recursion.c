#include "main.h"
void _puts_recursion(char *s);
/**
 * _puts_recursion - This function print to the standard output
 * @s: Pointer to the string of characters
 * Return: no return value
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	_putchar(*s);
	else
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(s + 1);
}
