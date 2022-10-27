#include "main.h"
/**
 * print_last_digit - returns last digit of a number
 * @n: Placeholder for the number
 *
 * Return: 1 digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	else
	{
		n = n;
	}
	while (n > 10)

	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
