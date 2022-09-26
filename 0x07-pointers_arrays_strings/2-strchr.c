#include "main.h"
/**
 * _strchr - entry point
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
