#include "main.h"
unsigned int _strspn(char *s, char *accept);
/**
 * _strspn - This function count the accepted character in the
 * string of character
 * @s: The string to be checked
 * @accept: the character we that we will counted with the function
 * Return: return count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i;

	count = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (accept[i] == *s)
		{
			count++;
			break;
		}
		if (*s == '\0')
			break;
		s++;
	}
	return (count);
}
