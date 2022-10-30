#include "main.h"
/**
 * print_to_98 - prints  from n to 98
 * @n: Integer to countdown from
 *
 * Return: void
 */

void print_to_98(int n)
{
	int x;

	for (x = n; x < 99; x++)
	{

		if ((x > 9) || (x < -9))
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');

			if (x < 99)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
	}

}
