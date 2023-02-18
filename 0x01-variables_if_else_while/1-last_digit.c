#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints the last digits of a random number
 * and whether its greater than 5, less than 6, or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("last digit of %d is %d and id 0\n", n, m);
	}
	return (0);
}
