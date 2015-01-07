// Shalin Upadhyay
// Project Euler Problem 1

#include <stdio.h>

int main (void)
{
	int i;
	int total = 0;

	for (i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	printf("%d\n", total);
	
	return 0;
}