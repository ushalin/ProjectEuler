// Shalin Upadhyay
// Project Euler Problem 2

#include <stdio.h>

#include <stdio.h>

int main ()
{
	int a = 0;
	int b = 1;
	int total = 0;
	int sum = 0;

	while (total < 4000000)
	{
		total = a + b;
		a = b;
		b = total;

		if(b % 2 == 0)
		{
			sum += b;
		}
	}
	printf("Sum: %d\n", sum);
}