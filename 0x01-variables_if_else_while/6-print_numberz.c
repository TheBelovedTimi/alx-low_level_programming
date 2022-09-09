#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10 starting from 0
 * print a new line
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);
}
