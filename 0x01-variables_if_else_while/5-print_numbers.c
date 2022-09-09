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
	int i = 48;

	while (i < 58)
	{
		printf("%i", i);
		i++;
	}

	putchar(10);
	return (0);
}
