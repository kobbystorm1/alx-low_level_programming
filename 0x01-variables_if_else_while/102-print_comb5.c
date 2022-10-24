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
	int z;

	for (i = 48; i <= 57; i++)
	{
		for (x = 48; x <= 57; x++)
		{
			for (y = 48; y <= 57; y++)
				for (z = 48; z <= 57; z++)
				{
					putchar(i);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);
					putchar(',');
					putchar(' ');
				}


		}
	}
	putchar('\n');
	return (0);
}
