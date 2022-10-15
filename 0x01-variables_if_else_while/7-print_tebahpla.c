#include<stdio.h>

/**
 * main - Print the reverse alphabet
 *
 * Return: Always
 */
int main(void)
{
	char c;

	for (c = 'Z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
