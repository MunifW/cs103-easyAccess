/* TODO: write a function that takes a string s and an integer n and circularly
 * shifts the string's characters to the right by n positions.  For example,
 * the string "Halloween" shifted by 3 would become "eenHallow".
 * NOTE: you can assume the integer is non-negative.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

void circ(string& input, size_t& changePos)
{
	string s2 = input; // s2 holds a copy of the original userInput
	size_t newPosition = 0; // This will hold the modular arithmatic 

	for (size_t i = 0; i < input.size(); i++)
	{
		/* I struggled to do this assignment without this, but then I realized the file name was alluding to the
			same math I used in the game of life project. */
		newPosition = (i + changePos) % input.size();

		input[newPosition] = s2[i]; 
		/* s2 is our original string, so we are saying to move the ith value in s2 into
			the value of newPosition*/
	}

	cout << "Your new input: " << input << "\n";
}

int main()
{
	string userInput;
	size_t n = 0;

	cout << "Please input a string!" << "\n"; // Get string from user
	getline(cin, userInput);

	cout << "Please input the amount of positions you want to shift by!" << "\n"; // Get shift position from user
	while (cin >> n)
	{
		if (n > userInput.size()) // Makes sure the shift is less than the string length itself
		{
			cout << "n needs to be smaller than your string, and positive!" << "\n";
		}
		else
		{
			break;
		}
	}

	circ(userInput, n);

	return 0;
}

// vim:foldlevel=2
