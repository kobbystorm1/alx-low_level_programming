#include "main.h"
/**
 * print_last_digit - returns last digit of a number
 * @n: Placeholder for the number
 *
 * Return: 1 digit
 */

int print_last_digit(int n)
{

	while (n > 10)

	{
		n = n%10;
	}

	return (n);
}
