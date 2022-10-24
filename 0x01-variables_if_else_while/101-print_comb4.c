#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	int x;
	int y;

	for (i = 48; i < 57; i++)
	{
		for (x = i + 1; x <= 57; x++)
		{
			for (y = x + 1; y <= 57; y++)
			{
				putchar(i);
				putchar(x);
				putchar(y);
				if ((i == 55) && (x == 56) && (y == 57))
				{
					continue;
				}
				else
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
