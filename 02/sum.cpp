/* TODO: write a program to compute (and then print) sum of all integers
 * given on standard input. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int x;     //The variable that will be taking input
	int total; // The variable that will be updated for every input

	cout << "To stop inputting numbers, simply type a letter!" << "\n"; //Letting the user know how to stop the program

	while (true) //This loop is used to take a new input of x for every number, then will be added to the total var.
	{
		cout << "Please input a number: " << "\n";
		cin >> x;

		total = x + total;

		if (!cin) //This will stop the loop once a number is not typed
		{
			break;
		}
	}

	cout << "Your total was: " << total << "\n"; //output the total
	return 0;
}

// vim:foldlevel=2
