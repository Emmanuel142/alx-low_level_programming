#include "main.h"
char *_memset(char *s, char b, unsigned int n);
/**
 * _memset - This function is convert the
 * members of an arrays to a particular value
 * @s: The pointer to the array
 * @b: Value that will be contained in the arrays
 * @n: The size of the array
 * Return: char s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
