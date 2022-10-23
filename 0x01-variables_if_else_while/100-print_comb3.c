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

	for (i = 48; i < 57; i++)
	{
		for (int x = i + 1; x <= 57; x++)
		{
			putchar(i);
			putchar(x);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
