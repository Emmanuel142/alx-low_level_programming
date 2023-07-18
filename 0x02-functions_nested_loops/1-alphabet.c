#include "main.h"
/**
 * main - starting point of the code
 * Description: This code write a - z
 * Return; Always 0 (Success)
 */
int main(void)
{
	void print_alphabet(void);

	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int i;
	int n;

	n = 10;
	i = 97;

	for (i = 97; i < 122; i++)
		_putchar(i);
	_putchar(n);
}
