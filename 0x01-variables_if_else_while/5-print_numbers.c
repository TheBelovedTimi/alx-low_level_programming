#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print all single digit number of base 10 starting from 0
 * then print a new line
 * Return: 0
 */
int main(void)
{
	int n = '0';

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}

	putchar('\n');
	return (0);
}
