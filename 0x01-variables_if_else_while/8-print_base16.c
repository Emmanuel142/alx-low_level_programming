#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: Prints  the decimal digit using ascii code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;
	int j;

	i = 48;
	j = 97;
	n = 10;

	for (i = 48; i <= 57; ++i)
		putchar(i);
	for (j = 97; j <= 102; j++)
		putchar(j);
	putchar(n);
	return (0);
}
