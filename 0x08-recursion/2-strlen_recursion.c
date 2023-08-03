#include "main.h"
int _strlen_recursion(char *s);
/**
 * _strlen_recursion - This function print the length of a string
 * @s: the string passed
 * Return: the lenght of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
