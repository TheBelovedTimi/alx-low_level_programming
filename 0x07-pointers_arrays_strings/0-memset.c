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

	/*Delacring FOR*/
	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	} /*END FOR*/
	return (s);
}
