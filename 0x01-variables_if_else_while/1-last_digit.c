#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_number = n % 9;

	if (last_number > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last_number);
	}
	else if (last_number == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last_number);
	}
	else (last_number < 6 && last_number != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_number)
	}
	return (0);