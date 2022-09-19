#include "main.h"
/**
 * swap_int - Entry point
 * @a: A pointer to an int
 * @b: B pointer to an int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
