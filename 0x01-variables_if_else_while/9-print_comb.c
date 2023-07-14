#include <stdio.h>
/**
 * main - Staring point of the program
 *
 * Description: This function print formatted decimal digits (0-9)
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int k;
	int n;

	i = 48;
	j = 32;
	k = 44;
	n = 10;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		break;
		putchar(k);
		putchar(j);
	}
	putchar(n);
	return (0);
}
