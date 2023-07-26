#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * Description: This program generate a random password
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, i, b, c, d, e;

	srand(time(0));

	a = rand() % 26;
	b = rand() % 26;
	c = rand() % 10;
	d = rand() % 100;
	e = rand() % 9;

	a += 65;
	b += 97;
	c += 48;
	d += 1;
	e += 33;

	for (i = 0; i < 10; i++)
		printf("%c%c%c%c%d%c", a, b, e, c, d % 10, e);
	return (0);
}
