#include "main.h"
#include <stdio.h>

/**
 * more_numbers - This function print 0 - 14
 * 10 times after that a new line
 * Return: no return
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				putchar('1');
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}