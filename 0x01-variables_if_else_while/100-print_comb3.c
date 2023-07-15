#include <stdio.h>
/**
 * main - Staring point of the program
 *
 * Description: This function print formatted combination of decimal digit
 * two digit should not be joined together and reverse of a letter should
 * not be printed
 *Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int k;
	int n;
	int d;

	i = 48;
	j = 32;
	k = 44;
	n = 10;
	d = i;

	for (i = 48; i <= 57; i++)
	{
		for (d = i; d <= 57; d++)
		{
			if (i == d)
				continue;
			putchar(i);
			putchar(d);
			if (i == 56 && d == 57)
				break;
			putchar(k);
			putchar(j);
		}
	}
	putchar(n);
	return (0);
}
