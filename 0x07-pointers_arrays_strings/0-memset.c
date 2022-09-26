#include "main"
/**
 * _memset - entry point
 * @s: pointer block of memory
 * @b: value to set
 * @n: bytes ot memory
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
