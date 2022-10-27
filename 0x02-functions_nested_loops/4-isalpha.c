#include "main.h"
/**
 * _isalpha - checks if character is alphabetical character
 *  @c: Placeholder for the character
 *
 * Return: 1 if character and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))

	{
		return (1);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
