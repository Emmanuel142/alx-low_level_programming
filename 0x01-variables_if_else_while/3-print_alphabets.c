#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program print the alphabets in lowercase
 * and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int n;

	i = 97;
	n = 65;
	j = 10;

	for (i = 97; i <= 122; ++i)
	{
		putchar(i);
	}
	for (n = 65; n <= 90; ++n)
	{
		putchar(n);
	}
	putchar(j);

	return (0);
}
