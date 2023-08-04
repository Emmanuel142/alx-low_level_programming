#include "main.h"
int wildcmp(char *s1, char *s2);
/**
 * wildcmp - Compares two strings and returns 1 if they are identical,
 * considering the special character '*'.
 * @s1: First string
 * @s2: Second string with the special character '*'
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
