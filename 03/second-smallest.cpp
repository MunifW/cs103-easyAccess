/* TODO: write a small program that will read integers from standard input (cin)
 * and print the *second smallest* integer to standard output (cout).
 * NOTE: this might be a little challenging.  Be sure to work out your process
 * clearly on paper (say using the post-it note model) before trying to write
 * any code. */
#include <iostream>
using std::cin;
using std::cout;

/*My current thought process for finding the smallest integer from an inputted list is to have the user input a number for x
	and then continously input numbers for y, but for each input, x will be compared with y and its value will be reassigned
		over and over again, until the smallest number is found.*/

int main()
{
	/* First figure out how to print out the smallest integer first. */

	/*Basic idea is that x and y will always be overwritten into z.*/

	int x, y, z, count = 0; 

#if 0
	cout << "Please input a value for x: " << "\n"; //X will be a static # that gets compared to
	cin >> x;

	cout << "Please input a value for y: " << "\n"; //Will always be changing

	while (cin >> y)
	{

		if (x < y) //z will become x if x < y
		{
			z = x;
		}
		else if (y < z || z < x) //x will change its value so that the loop can keep going, and z will become y
		{
			x = y;
			z = y;
		}

		//cout << "Current Z value: " << z << "\n";
	}

	cout << "Smallest Value: " << z << "\n";
#endif

	bool checker = false; //This is a way to not have to update x, or basically not continously going into the first if statement.


	cout << "Please input a value for x: " << "\n"; //X will be a static # that gets compared to
	cin >> x;

	cout << "Please input a value for y: " << "\n"; //Will always be changing

	while (cin >> y)
	{
		//cout << "Current x value pain: " << x << "\n";

		if (x < y && checker == 0) //z will become x if x < y
		{
			checker = true;
			z = x;

			cout << "Do I go in here? " << "\n";
		}
		else if (y < z || z < x) //x will change its value so that the loop can keep going, and z will become y
		{
			
			//x = y;
			x = z; //This is to swap the values of x and z, to get the second smallest.
			z = y;

			cout << "Balls" << "\n";
			//cout << "Else if X: " << x << "\n";
		}

		cout << "Current Z value: " << z << "\n";
		cout << "Current x value: " << x << "\n";
	}

	cout << "Second smallest value: " << x << "\n";

//THE PROBLEM RIGHT NOW IS THAT DESCENDING ORDER DOES NOT WORK FOR SECOND SMALLEST!!!!!!!!!!!!!!!!!!!!!!

	return 0;
}

// z < x works because z is 0 at first, so when you input numbers in descending order, the program will go into the else if statement. 

// vim:foldlevel=2
