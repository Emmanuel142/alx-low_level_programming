#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char
 * @size: The size of the array
 * @c: The char to initialize the array with
 * Return: Pointer to the newly created array,
 * or NULL if size is 0 or allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	ptr = malloc(sizeof(char) * size);

	if (ptr == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
