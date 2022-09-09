#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints the lowercass alphabetn in reverse
 * print a new line
 * Return: 0
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}

	putchar('\n');
	return (0);
}
