#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program print the base 10 digits 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	n = 10;
	for (i = 0; i < 10; ++i)
		printf("%d", i);

	putchar(n);

	return (0);

}
