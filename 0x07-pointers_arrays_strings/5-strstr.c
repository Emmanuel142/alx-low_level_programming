#include "main.h"
char *_strstr(char *haystack, char *needle);
/**
 * _strstr - This function check the substring in a string
 * @haystack: The main string
 * @needle: The sub-string
 * Return: The pointer to the beginning of the
 * substring and NULL if none is found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;
	char *start = haystack;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
