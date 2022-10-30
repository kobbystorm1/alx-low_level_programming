#include "main.h"
/**
 * times_table - prints 9 times table
 * column: Placeholder for columns
 * row: Placeholder for rows
 *
 * Return: void
 */

void times_table(void)
{
	int row, value, ans;

	for (row = 0; row <= 9; row++)
	{
		for (value = 0; value <= 9; value++)
		{
			ans = row * value;

			if (ans > 9)
			{
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');

				while (value < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(ans + '0');

				while (value < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
	_putchar('\n');
	}

}
