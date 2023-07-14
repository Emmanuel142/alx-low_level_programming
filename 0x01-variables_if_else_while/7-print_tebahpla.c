#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the lowecase alphabets in
 * descending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	i = 122;
	n = 10;
	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar(n);

	return (0);
}
