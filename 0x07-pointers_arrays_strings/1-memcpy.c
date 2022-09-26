#include "main.h"
/**
 * _memcpy - entry point
 * @dest: content to be copied
 * @src: source of data
 * @n: bytes of the memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i); /*add 1 position to dest and src*/
		i++;
	}
	return (dest);
}
