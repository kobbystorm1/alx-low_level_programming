#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: Placeholder for the number
 * @m: Placeholder for return variable
 * 
 * Return: 1, 0,-1
 */

int print_sign(int n)
{
	int m;

	if (n > 0)

	{
		m=+1;
	}
	else if (n == 0)
	{
		m=0;
	}
	else
	{
		m=-1;
	}
	return m;

}
