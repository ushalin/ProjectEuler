// Shalin Upadhyay
// Project Euler Problem 6

#include <stdio.h>

int main (void)
{
	int i;
	int j;
	int sum_square = 0;
	int square_sum = 0;
	int sqr = 0;
	int sqr2 = 0;
	int diff = 0;

	for (i = 1; i <= 100; i++)
	{
		sum_square += i;
	}

	sqr = add * add;

	for (j = 1; j <= 100; j++)
	{
		sqr2 = j * j;
		square_sum += sqr2;
	}

	diff = sqr - square_sum;

	printf("Difference: %d\n", diff);
	
	return 0;
}