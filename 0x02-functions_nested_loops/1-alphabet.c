#include "main.h"
void print_alphabet(void);
/**
 * main - starting point of the code
 * Description: This code write a - z
 * Return; Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	int n;

	n = 10;
	i = 97;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar(n);
}
int main(void)
{
	print_alphabet();
	return (0);
}
