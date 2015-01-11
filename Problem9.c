// Shalin Upadhyay
// Project Euler Problem 9

#include <stdio.h>

int main (void)
{
	int a;
	int total = 0;
	int sum = 1000;

	for (a = 1; a <= sum/3; a++)
	{
		int b;

		for(b = a + 1; b <= sum/2; b++)
		{
			int c = sum - a - b;

			if (c > 0 && (a * a + b*b == c*c))
			{
				printf("a: %d\n", a);
				printf("b: %d\n", b);
				printf("c: %d\n", c);

				total = a * b * c;

				printf("abc = %d\n", total);
			}
		}
	}

}