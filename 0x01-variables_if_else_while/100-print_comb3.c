#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Descripption: prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{
		n = 0;
		while (n < 10)
		{
			if (i != n && i < n)
			{
				putchar('0' + i);
				putchar('0' + n);

				if (n + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			n++;
		}
		i++
	}
	putchar('\n');
	return (0);
}
