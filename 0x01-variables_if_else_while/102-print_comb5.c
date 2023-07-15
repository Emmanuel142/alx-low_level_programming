#include <stdio.h>
/**
 * main - Starting point of the program
 *
 * Description: This function prints formatted combinations of decimal digits
 * should not be printed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 <= 9; num1++)
    {
        for (num2 = num1 + 1; num2 <= 9; num2++)
        {
            putchar(num1 + '0');
            putchar(num2 + '0');

            if (num1 != 9 || num2 != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    for (num1 = 10; num1 <= 98; num1++)
    {
        num2 = num1 % 10 * 10 + num1 / 10;

        putchar(num1 / 10 + '0');
        putchar(num1 % 10 + '0');
        putchar(' ');
        putchar(num2 / 10 + '0');
        putchar(num2 % 10 + '0');

        if (num1 != 98)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return 0;
}

