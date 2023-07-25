#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int i = 0, b, c;
	char d;

	while (s[i] != '\0')
	{
		a++;
	}
	c = i - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
