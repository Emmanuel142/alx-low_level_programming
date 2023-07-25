#include "main.h"
/**
 * puts_half - this function print half of a string and it prints the second half
 * @str: the string inputed
 * Return: No return value
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
	{
		if (j > i/2)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}
