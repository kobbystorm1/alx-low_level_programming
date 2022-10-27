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

	if (n > 0)

	{
		_putchar(43);
		_putchar(49);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		_putchar(49);
		return (-1);
	}
}
