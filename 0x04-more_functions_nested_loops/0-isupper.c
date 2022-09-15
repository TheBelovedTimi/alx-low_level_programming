#include "main.h"
/**
 * _isupper - Entry point
 * Description: check for uppercase character
 * @c: tthe integer value
 * Return: Return 1, if uppercase. Return 0, if otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
