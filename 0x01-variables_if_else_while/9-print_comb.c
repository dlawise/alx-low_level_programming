#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	{

		if (i != 9)

			putchar(',');
			putchar(' ');

	}
	putchar(i);
	return (0);
}
