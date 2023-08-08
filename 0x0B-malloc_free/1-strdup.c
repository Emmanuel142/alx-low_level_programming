#include <stdio.h>
#include <stdlib.h>
unsigned int strlen(char *str);
/**
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size;
	unsigned int i;

	size = strlen(str);

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
unsigned int strlen(char *str)
{
	unsigned int size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size)
}
