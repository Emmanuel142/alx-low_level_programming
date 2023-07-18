#include "main.h"
#include <stdio.h>

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
  void print_alphabet();
    return 0;
}

/**
 * print_alphabet - Prints the lowercase alphabets from 'a' to 'z'
 */
void print_alphabet(void)
{
    int i;

    for (i = 'a'; i <= 'z'; i++)
        putchar(i);

    putchar('\n');
}

