#include "main.h"
/**
 * _strspn - entry point
 * @s: String
 * @accept: List of character
 * Return: count
 */
unsigned int _strspn(char *s, *accept)
{
	int i, j;
	int count;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0') /*Declaring WHILE *s */
	{
		j = 0;
		while (str2[j] != '\0') /*Declaring WHILE *accept*/
		{
			if (str2[j] == str1[i]) /*Evaluate condition*/
			{
				count++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j]) /*If aren't equals*/
		{
			break;
		}
		i++;
	}
	return (count);
}
