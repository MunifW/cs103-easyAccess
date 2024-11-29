/* TODO: write a program to test the collatz conjecture.  This conjecture
 * considers the following process:
 * Start with any (positive) integer n and then transform it as follows:
 * -- if n == 1, stop
 * -- if n is even, divide it by 2 (n --> n/2)
 * -- if n is odd, multiply by 3 and add 1 (n --> 3n+1)
 * Conjecture: this process always stops after a finite number of steps,
 * no matter what value of n you start with.
 *
 * Your program should work as follows:
 * 1. read an integer
 * 2. see how many steps the above process takes before you hit 1
 * 3. print # of steps
 * 4. go back to (1) until stdin has no more integers to read.
 * */


#include <iostream>
using std::cin;
using std::cout;

int main()
{
	// Should it read multiple integers or just one?

	/* Can be done with a while loop it seems like
		1. Make an int that takes input
		2. make a while loop that has a conditional along the lines of "while(input != 1)"
		3. make if statements doing the calculations
		4. make a count for each
		5. print out count 
		
		Use an if statement that says if the process equals 1, then break out of the while loop*/

	int input = 0;
	int steps = 0;

	cin >> input;

	while (input > 0) // Only accepts positive numbers
	{
		if (input == 1) // Exit when it equals 1.
		{
			steps++;

			break;
		}

		if (input % 2 == 0) // If the input is even, go into this if statement
		{
			input = input / 2;

			steps++; // Count the number of times it took to do the process.
		}
		else // Otherwise it is odd
		{
			input = 3*input + 1;

			steps++; // Count the number of times it took to do the process.
		}
	}

	cout << "Number of steps: " << steps << "\n";


	return 0;
}

// vim:foldlevel=2
