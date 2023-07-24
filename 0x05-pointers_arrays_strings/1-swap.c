#include "main.h"

/**
 * swap_int - this function swap the values of intergers
 * @a: The first input of the swap function
 * @b: The second input of the swap function
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
