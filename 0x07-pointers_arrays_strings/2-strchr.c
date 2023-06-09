#include "main.h"

/**
 * _strchr - locate character in a string
 *
 * @s: parameter for string
 * @c: parameter for character
 *
 * Return: pointer to first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
