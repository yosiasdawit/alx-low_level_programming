#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main -assign a ramdom nu,ber to the variable n
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("0 is zero\n");
	if (n < o)
		printf("%d is negative\n" , n);
	return (0);
}
