/* TODO: write a small program that reads 3 integers from standard input
 * and prints the average of those integers.  NOTE: the average might not
 * be an integer.
 * Bonus question: if you can, make your program work not just for 3 integers,
 * but for arbitrarily many. */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* The average is when you add up all the numbers, and divide by how many there are. So, I would need to get input for 
	3 or more numbers, and then divide by how many. There should be vars that store inputs, then another var that does math. */

	// float x, y, z;
	// float average;

	// cout << "Please input three integers: " << "\n";
	// cin >> x >> y >> z;

	// float add = x + y + z;
	// // cout << add << "\n";

	// average = add / 3.0; //Adding .0 is what makes it print out a decimal number
	// cout << "Your average is: " << average << "\n";

	// MAKE ANOTHER VERSION WHERE YOU CAN INPUT A BUNCH OF NUMBERS

	float x;
	float total;
	float average;
	int count;

	cout << "To stop the program, simply type a letter!" << "\n";

	while (true)
	{
		cout << "Please input a number" << "\n";
		cin >> x; //Will listen for new numbers continuously

		total = x + total; //Will add each new number to a total

		count++; //Everytime a number is inputted, it will add 1 to each run of the while loop

		if (!cin) //Will break the while loop when a letter is pressed
		{
			break;
		}
	}

	count = count - 1; //The while loop considers a letter as the while loop running another time, so minus 1 to get the true count
	cout << "Your total was: " << total << "\n";
	cout << "You inputted this many numbers: " << count << "\n";

	average = total / count;

	cout << "Your average was: " << average << "\n";
	
	return 0;
}

// vim:foldlevel=2
