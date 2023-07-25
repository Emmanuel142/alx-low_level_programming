#include "main.h"

/**
 * puts2 - this function print every character or a string starting
 * with first character follow by a new line
 * @str: the string of character inputed
 * Return: No return value
 */
void puts2(char *str)
{
	int i;
	int j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; i++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}

	_putchar('\n');
}
