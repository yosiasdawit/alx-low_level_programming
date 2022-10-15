#include<stdio.h>

/**
 * main - letters in the alphabet
 *
 * Return: Always
 */
int main(void)
{
	char c;

	for (c = 'a' c <= 'Z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
