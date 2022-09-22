/**
 * _putchar - entry point
 * @c: Character to print
 * Return: 1, on success. 0, on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
