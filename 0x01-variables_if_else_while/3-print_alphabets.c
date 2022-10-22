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
	char ch = 'a';
	char up = 'A';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	while (up <= 'Z')
	{
		putchar (up);
		up++;
	}
	putchar ('\n');

	return (0);
}
