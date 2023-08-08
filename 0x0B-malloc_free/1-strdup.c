#include <stdio.h>
#include <stdlib.h>
unsigned int _strlen(char *str);
/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 * Return: A pointer to the duplicated string, or NULL
 * if memory allocation fails
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size;
	unsigned int i;

	size = _strlen(str);

	if (size == 0)
		return (NULL);

	ptr = malloc(size + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[size] = '\0';
	return (ptr);

}
/**
 * _strlen - get the size of a string
 * @str: Pointer to the string
 * Return: the size of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int size = 0;

	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}
