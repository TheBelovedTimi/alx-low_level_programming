#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Prints all the number of base 16 in lowercase
 * print a new line
 * Return: 0
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	char m = 'a';

	while (m <= 'f')
	{
		putchar(m);
		m++;
	}

	putchar('\n');
	return (0);
}
