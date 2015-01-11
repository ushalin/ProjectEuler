// Shalin Upadhyay
// Project Euler Problem 4

public class Problem3
{
    public static void main (String args[])
    {
	int product;
	int max = 0;
	String pali;

	for (int i = 100 ; i <= 999 ; i++)
	{
	    for (int j = 100 ; j <= 999 ; j++)
	    {
		product = i * j;
		pali = String.valueOf (product);

		if (Palindrome (pali) == true)
		{
		    if (max < product)
		    {
			max = product;
		    }
		}
	    }
	}
	System.out.println ("Largest palindrome: " + max);
    }


    public static boolean Palindrome (String pali)
    {
	if (pali.length () <= 1)
	{
	    return true;
	}

	char first = Character.toUpperCase (pali.charAt (0));
	char last = Character.toUpperCase (pali.charAt (pali.length () - 1));

	if (Character.isLetter (first) == false && Character.isDigit (first) == false && Character.isLetter (last) == false && Character.isDigit (last) == false)
	{
	    return Palindrome (pali.substring (1, pali.length () - 1));
	}

	else if (Character.isLetter (first) == false && Character.isDigit (first) == false)
	{
	    return Palindrome (pali.substring (1, pali.length ()));
	}

	else if (Character.isLetter (last) == false && Character.isDigit (last) == false)
	{
	    return Palindrome (pali.substring (0, pali.length () - 1));
	}

	else if (first == last)
	{
	    return Palindrome (pali.substring (1, pali.length () - 1));
	}

	else
	{
	    return false;
	}
    }
}
