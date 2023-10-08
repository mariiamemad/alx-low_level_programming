#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number and
 * determines whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive");
	}
	else if (n < 0)
	{
		printf("negative");
	}
	else
	{
		printf("zero");
	}

	printf("\n");

	return (0);
}

