#include <stdio.h>
#include <stdlib.h>
int _strlen(char *str);
/**
 * str_concat - this function concatinate two string
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the memory allocated for the concatinated
 * string and NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0, len2 = 0, total;
	char *ptr;

	if (len1 != NULL)
		len1 = _strlen(s1);
	if (len2 != NULL)
		len2 = _strlen(s2);
	total = len1 + len2;

	ptr = malloc(total + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[i];
	ptr[total] = '\0';
	return (ptr);
}
/**
 * _strlen - this function calculate the length of a string
 * @str: the sting input
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
