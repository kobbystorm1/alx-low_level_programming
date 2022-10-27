#include "main.h"
/**
 * _abs - returns bsolute value of number
 * @n: Placeholder for the number
 *
 * Return: 0
 */

int _abs(int n)
{

	if (n < 0)

	{
		n = (-1) * n;
	}
	else
	{
		n = n;
	}
	return (n);
}
