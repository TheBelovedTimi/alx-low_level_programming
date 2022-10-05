#include <unistd.h>
/**
 * _putchar.c - entry pouint
 * @c: character
 * Return: 1 on succes, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
