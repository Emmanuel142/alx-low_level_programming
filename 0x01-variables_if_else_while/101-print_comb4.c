#include <stdio.h>
/**
 * main - Staring point of the program
 *
 * Description: This function print formatted combination of decimal digit
 * three digit should not be joined together and reverse of a letter should
 * not be printed
 *Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	int b;
	int c;
	int l;
	int m;
	int n;

	a = 48;
	b = 48;
	c = 48;
	l = 44;
	m = 32;
	n = 10;
	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
			if (a == 55 && b == 56 && c == 57)
				break;
			putchar(l);
			putchar(m);
			}
		}
	}
	putchar(n);
	return (0);
}
