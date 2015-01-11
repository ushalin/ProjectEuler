// Shalin Upadhyay
// Project Euler Problem 12

public class Problem12
{
    public static void main (String args[])
    {
	int sum = 0;
	int counter = 0;
	int i = 1;

	while (counter < 500)
	{
	    counter = 0;
	    sum += i;

	    for (int j = 1 ; j <= (Math.sqrt (sum)) ; j++)
	    {
		if ((sum % j) == 0)
		{
		    counter += 2;
		}
	    }
	    i++;
	}
	System.out.println (sum);
    }
}
