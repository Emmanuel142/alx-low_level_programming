#include "main.h"

void print_alphabet(void);

/**
 * main - Starting point of the code
 *
 * Description: This code writes the lowercase alphabets from 'a' to 'z'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    return 0;
}

void print_alphabet(void)
{
    int i;

    for (i = 'a'; i <= 'z'; i++)
        _putchar(i);

    _putchar('\n');
}

