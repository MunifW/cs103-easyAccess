/* TODO: write a program that reads two integers and prints their greatest
 * common divisor.  E.g., if the two integers were 12 and 18, then your
 * program should print 6.  If the numbers were 12 and 19, it should print 1.
 * NOTE: there is a nice way to do this, known as the Euclidean Algorithm,
 * but my intention is for you to just "brute force" search for the gcd.  */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* Thinking of making a loop that will continously divide the inputted numbers from 1 to itself (this will be the conditional)
		and then, I will use the comparison (kind of like from second-smallest) to keep track of the largest possible divisor so far. */

	int inputOne, inputTwo, gcd = 0;

	cout << "Please input two integers for their GCD: " << "\n";
	cin >> inputOne >> inputTwo;

	for (int i = 1, j = 1; i <= inputOne && j <= inputTwo; i++, j++)
	{
		if ((inputOne % i) == 0 && (inputTwo % j) == 0)
		{
			if (i == j)
			{
				gcd = i;
			}
		}
	}

	cout << "The GCD is: " << gcd << "\n";

	return 0;
}

// vim:foldlevel=2
