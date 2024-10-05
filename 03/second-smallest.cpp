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

	int x, y, z;

#if 0
	while (true)
	{
		cout << "Please input a value for x: " << "\n";
		cin >> x;

		cout << "Please input a value for y: " << "\n";
		cin >> y;

		//cout << "Current y value: " << y << "\n";

		if (x < y)
		{
			z = x;

			//cout << "Current z value (for x < y) " << z << "\n";
		}
		else if (y < x)
		{
			z = y;

			//cout << "Current z value (for y < x) " << z << "\n";
		}

		if (!cin >> x || !cin >> y)
		{
			break;
		}
	}
#endif
	/*Basic idea is that x and y will always be overwritten into z. 
	
	Noticable problem right now is that previous inputs will be thrown away, which makes finding smallest int not possible
		IDEA: Might have to use z in a conditional to compare with x and y... Maybe if (z < x || y)*/

	cout << "Please input a value for x: " << "\n"; //X will be a static # that gets compared to
	cin >> x;

	cout << "Please input a value for y: " << "\n"; //Will always be changing

	while (cin >> y)
	{
		if (x < y) //z will become x if x < y
		{
			z = x;

			//cout << "Current z value (for x < y) " << z << "\n";
		}
		else if (y < x) //z will become y is y < x
		{
			z = y;

			//cout << "Current z value (for y < x) " << z << "\n";
		}

		//cout << "Current Z value: " << z << "\n";
	}

	cout << "Smallest Value: " << z << "\n";

	return 0;
}

// vim:foldlevel=2
