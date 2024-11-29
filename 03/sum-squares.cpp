/* TODO: write a program that will read an integer n from standard input and
 * then print the sum of the first n squares.  That is:
 * 1^2 + 2^2 + 3^2 + ... + n^2.
 * NOTE: The '^' operator in C++ is NOT exponentiation!  To square x, just
 * use x*x instead.
 * Bonus question: compute the sum of the first n *odd* squares.  That is,
 * 1^2 + 3^2 + 5^2 + ... + (2n-1)^2
 * */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* your answer goes here... */

	/* I would have to make a while loop that reads from the user, and have a variable that equals that input times itself, which then will
	 then be added to a sum
	 
	 for the bonus question, I would have to only accept numbers that are odd, so have an if statement with (n % 2 != 0) as the conditional*/ 

	int input = 0;
	int square = 0;
	int sum = 0;

	cout << "Please input numbers for a sum: " << "\n";

#if 0 //Code for normal sum-squares
	while (cin >> input)
	{
		square = input*input;

		sum = sum + square;
	}

	cout << "Your sum is: " << sum << "\n";
#endif

	while (cin >> input)
	{
		for (int i = 0; i <= input; i++)
		{
			if (i % 2 != 0)
			{
				square = i*i;

				//cout << "Current value of i: " << i << "\n";
				//cout << "Current total of square: " << square << "\n";

				sum = sum + square;
			}	
		}
	}

	cout << "Your sum is: " << sum << "\n";

	return 0;
}

// vim:foldlevel=2
