#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 * @a: pointer to an int
 * @n: return value
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
	
	if (i < n - 1)
	{
		printf(", ");
	}
	i++;
	}
	printf("\n");
}
