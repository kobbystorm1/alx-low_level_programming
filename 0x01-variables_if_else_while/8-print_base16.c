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
	char c = 'a';

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
