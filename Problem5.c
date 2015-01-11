// Shalin Upadhyay
// Project Euler Problem 5

#include <stdio.h>

int main (void)
{
	int maxdiv = 20;
	unsigned long snum = maxdiv + 1;
	unsigned long i;
	int esc = 0;

	do
	{
		for (i = 1; i <= maxdiv; i++)
		{
			if ((snum % i) != 0)
			{
				break;
			}
		}

		if (i == maxdiv + 1)
		{
			esc = 1;
		}

		else
		{
			snum++;
		}
	}
	while(!esc);
	
	printf("Smallest Num: %lu\n", snum);
	
	return 0;
}