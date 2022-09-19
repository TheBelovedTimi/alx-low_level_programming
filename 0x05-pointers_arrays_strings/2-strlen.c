#include "main.h"
/**
 * _strlen - Length of the string
 * @s: Pointer to an int
 * Return: void
 */
int _strlen(char *s)
{
	int u;

	u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
