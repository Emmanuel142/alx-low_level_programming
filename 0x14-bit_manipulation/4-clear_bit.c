#include "main.h"

/**
 * clear_bit - clears a bit at a given index.
 * @n: A pointer to the number where the bit will be cleared.
 * @index: The index of the bit to clear (0 for the least significant bit).
 *
 * Return: 1 on success, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8) {
return -1;
}

mask = 1UL << index;
*n &= ~mask;

return 1;
}

