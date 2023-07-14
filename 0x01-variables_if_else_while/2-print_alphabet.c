#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program print a-z lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	n = 10;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(n);

	return (0);
}

