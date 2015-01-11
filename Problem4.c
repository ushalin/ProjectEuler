// Shalin Upadhyay
// Project Euler Problem 3

#include <stdio.h>

int main (void)
{
	long mainnum = 600851475143;
	int num = 2;

	while ((num * num) <= mainnum)
	{
		if (mainnum % num == 0)
		{
			mainnum /= num;
		}

		else
		{
			num++;
		}
	}
	printf("Factor is: %ld\n", mainnum);
	
	return 0;
}