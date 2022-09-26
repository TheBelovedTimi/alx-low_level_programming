#include "main.h"
/**
 * _strspn - entry point
 * @s: String
 * @accept: List of character
 * Return: count
 */
unsigned int _strspn(char *s, *accept)
{
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1; /*flag status*/
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0; /*success*/
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}
	return (1);
}
