#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints  the decimal digit using ascii code 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	i = 48;
	n = 10;

	for (i = 48; i <= 57; ++i)
		putchar(i);
	putchar(n);
	return (0);
}
