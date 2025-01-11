/* TODO: write your own version of the "find" function, which takes two
 * strings, and searches for the second one in the first.  If a match is
 * found, you should return the index where the match begins in the first
 * string.  If no match is found, you can return the index -1 (which is
 * also known as string::npos). */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* Seems simple enough!
	-> Get the user to input two strings --> DONE
	-> Make a nested for loop that compares the first letter of inputOne with all the letters of inputTwo, and repeats.
		If a count equals the size of the second input, then it should exist. 
	-> If the second string exists within the first, then find the index in which it starts in the first 
		To do this, use the count for inputTwo. If the vector position in inputOne matches the count value in inputTwo, then you found your match
			so you can then find where the starting index is in inputone.
	-> If no match is found, return -1.
*/

void find(string& inputOne, string& inputTwo)
{
	size_t count = 0;

	for (size_t i = 0; i < inputOne.size(); i++)
	{
		for (size_t j = 0; j < inputTwo.size(); j++)
		{
			if (inputOne[i + j] == inputTwo[j])
			{
				count++;

				cout << "Current count: " << count << "\n"; //I was able to successfully find the match via the count... 
			}

			if (count == inputTwo.size()) // Need to find a way to tell the computer what word to look for
			{
				cout << "You found a match!" << "\n";

				//cout << "Index value: " << inputOne[j] << "\n";
			}	

			count = 0;
		}

		// Make an if statement for when no match is found
	}
}

int main()
{
	string input1;
	string input2;

	cout << "Please input a string!" << "\n";
	getline(cin, input1);

	cout << "Please input another string!" << "\n";
	getline(cin, input2);

	find(input1, input2);

	return 0;
}

// vim:foldlevel=2
