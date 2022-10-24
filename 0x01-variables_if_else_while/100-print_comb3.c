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

	for (i = 48; i < 57; i++)
	{
		for (x = i + 1; x <= 57; x++)
		{
			putchar(i);
			putchar(x);
			if ((i == 56) && (x == 57))
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
	putchar('\n');
	return (0);
}
