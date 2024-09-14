/* TODO: write a program that computes the following strange thing:
 * the difference of the sum of all the evens and the odds.  E.g. if
 * the input were 4 7 6 then the output would be 3 (= (4+6) - 7).
 * You can figure out even oddness by using the % operator which computes
 * the *remainder* of a division.
 * Bonus question (easy):  can you do this without keeping track of two
 * different sums?
 * Bonus question (might be non-obvious): can you do this without any
 * if statements? */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* make a program that intakes even numbers and then adds them up, then gets subtracted by odd numbers.
	1. First, find out how to only get even and odd numbers
	2. Then, make while loops that continously add the even numbers
	3. Finally, make a while loop that subtracts the odd numbers from the even numbers*/
	
	#if 0
	while (cin >> even)
	{
		even = even % 10; //Will give you an even number for any even number except for numbers 0 - 10.

		cout << "Your even number is: " << even << "\n";

		if (even == 1 || even == 3 || even == 5 || even == 7 || even == 9) //FIND A BETTER WAY TO CHECK FOR ODD NUMBERS
		{
			cout << "Not an even number! Try again." << "\n";
		}
		else 
		{
			sum = sum + even;
		}
	}
	#endif


	int even, odd, sum;

	cout << "Please input numbers: " << "\n";

	while (cin >> even)
	{
		if (even % 2 == 0)
		{
			sum = sum + even;
		}
		else if (even % 2 != 0)
		{
			sum = sum - even;
		}
	}

	cout << "Your current sum is: " << sum << "\n";

	return 0;
}

// vim:foldlevel=2


/*An idea to think about... Would using 2k + 1 to make odd numbers be acceptable in this program?
								Would using only 2k to make even numbers be acceptable in this program?

		If we are using the % symbol to basically break off the users input into something even or odd, then we should be able to use this...*/
