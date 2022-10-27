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
	signed int m;

	if (n > 0)

	{
		m = '+1';
		_putchar(43);
		return (m);
	}
	else if (n == 0)
	{
		m = 0;
		_putchar(48);
		return (m);
	}
	else
	{
		m = '-1';
		_putchar(45);
		return (m);
	}
}
