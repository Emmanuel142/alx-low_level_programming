#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _memcpy - This function copy a specified numbers
 * of memory in an array to a destination array
 * @dest: Apointer to the destination memory where the array will
 * be stored
 * @src: The pointer to the source array
 * @n: The number of byte to copy fom the source array
 * Return: Return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
