#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program print the alphabets in lowercase
 * excludint e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	i = 97;
	n = 10;

	for (i = 97; i <= 122; ++i)
	{
		if (i == 101)
			continue;
		else if (i == 113)
			continue;
		else {
			putchar(i);
		}
	}
	putchar(n);

	return (0);
}
