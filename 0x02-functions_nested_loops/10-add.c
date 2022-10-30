#include "main.h"
/**
 * add - prints result of 2 integer addition
 * @a: Placeholder for integer1
 * @b: Placeholder for integer2
 *
 * Return: integer sum
 */

int add(int a, int b)
{
	int ans;

	ans = a + b;

	if (ans > 9)
	{
	_putchar((ans / 10) + '0');
	_putchar((ans % 10) + '0');
	}
	else
	{
	_putchar(ans  + '0');
	}

	return ();
}
