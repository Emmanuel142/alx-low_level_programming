#include "main.h"
char *_strchr(char *s, char c);
/**
 * _strchr - This function returns the first character it encounters
 * @s: The string checked for character occurence
 * @c: The
 * Return: return the first occurence of character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
