#include "main.h"
/**
 * puts_half - this function prints the second half of a string
 * @str: the string inputed
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 != 0)
		i = i - 1;
	for (j = 0; j <= i; j++)
		if (j >= i / 2)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
