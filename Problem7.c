// Shalin Upadhyay
// Project Euler Problem 7

#include <stdio.h>

int main ()
{
	int pcount = 0;
	int count = 1;
	int esc = 0; // Used as boolean variable

	do
	{
		count++;

		if (isPrime(count))
		{
			pcount++;
		}

		if (pcount == 10001)
		{
			esc = 1;
		}
	}
	while (!esc);

	printf("10001 Prime Number is: %d\n", count);
	
	return 0;
}

int isPrime (int num)
{
	int i;
	int esc = 1; // Used as boolean variable

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			esc2 = 0;
			break;
		}
	}
	return esc2;
}