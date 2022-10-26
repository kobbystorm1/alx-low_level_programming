#include "main.h"
/**
 * _islower - checks if character is a lower character
 *
 * Return: 0.
 * c - placeholder for the character
 */
int _islower(int c)/*c - character to be held here*/

{
	int c;/*character to be held here*/

	if ((c >= 'a') && (c <= 'z'))

	{
		return (1);
	}
	else
	{
		return (0);
	}

}
