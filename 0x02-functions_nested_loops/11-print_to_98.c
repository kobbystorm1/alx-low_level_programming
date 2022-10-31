#include "main.h"
/**
 * print_to_98 - prints  from n to 98
 * @n: Integer to countdown from
 *
 * Return: void
 */

void print_to_98(int n)
{
	int x , y;
	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x > 99)
			{
				_putchar((x / 100) + '0');
				y = (x / 10);
 
				if ((x % 100) >= 10)
				{
					y = (y / 10);
					_putchar(y + '0');
				}
				else
				{
					_putchar((y % 10) + '0');
				}
				_putchar((x % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (x != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	else if (n < 0)
	{
		while (n < 0)
		{
			n = (-1) * n;
			for (x = n; x < 0; x--)
			{
				_putchar('-');
				if (x > 99)
				{
                        {                                                                                                  _putchar((x / 100) + '0');                                                                 y = (x / 10);                                                                                                                                                                         if ((x % 100) >= 10)                                                                       {                                                                                                  y = (y / 10);                                                                              _putchar(y + '0');                                                                 }                                                                                          else                                                                                       {                                                                                                  _putchar((y % 10) + '0');                                                          }                                                                                          _putchar((x % 10) + '0');                                                                  _putchar(',');                                                                             _putchar(' ');                                                                     }                                                                                          else                                                                                       {                                                                                                  _putchar((x / 10) + '0');                                                                  _putchar((x % 10) + '0');                                                                  if (x != 98)                                                                               {                                                                                                  _putchar(',');                                                                             _putchar(' ');                                                                     }                                                         
				

			}
		}		
	}
	else
	{
		for (x = n; x < 99; x++)
		{
			if ((x > 9) || (x < -9))
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (x < 98)
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
		_putchar('\n');
}
