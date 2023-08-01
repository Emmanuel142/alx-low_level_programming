#include "main.h"
char *_strpbrk(char *s, char *accept);
/**
 * _strpbrk - This function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: The pointer to the string in which the search is performed.
 * @accept: The pointer to the set of characters to search for.
 * Return: returns pointer to the location of character found
 * and NULL if non is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*accept != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == *accept)
				return (&(s[i]));
		}
		accept++;
	}
	return ('\0');
}
