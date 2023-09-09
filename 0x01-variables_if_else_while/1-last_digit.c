#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	if ((a % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			a, a % 10);
	}
	else if ((a % 10) < 6 && (a % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			a, a % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			a, a % 10);
	}

	return (0);

}
