#include <unistd.h>
/**
 * _putchar - entry point
 * @c: Character to print
 * Return: 1 for succes, -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
