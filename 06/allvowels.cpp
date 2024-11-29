/* TODO: Write a function that takes a string parameter, and returns a boolean
 * value indicating whether or not *all* vowels (a,e,i,o,u) are present
 * somewhere in the string.  For example, if the input is "hello world", the
 * return value should be false, and on input "programming is super fun!" the
 * return value should be true.
 * NOTE: to simplify things, you can assume the input string is all lower case.
 * */

#include <iostream>
#include <vector>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

void allvowels (string input)
{
	vector<char> vowels = {'a', 'e', 'i', 'o', 'u'}; //Storing all vowels in a vector for later comparison
	int count = 0;

	cout << "Please input a string in all lowercase!" << "\n";
	getline(cin, input); // Could not figure out how to make cin accept more than just one word... so used getline

	for (size_t i = 0; i < input.size(); i++)
	{
		for (size_t j = 0; j < input.size(); j++)
		{
			if (input[j] == vowels[i]) // For every letter within input, it is going to compare it to all the values and keep a count.
			{
				count++;
			}
		}
	}

	if (count >= 5) // Since there are only 5 vowels, if an input has a count of 5 or more, then all the vowels must exist within the input.
	{
		cout << "True!" << "\n";
	}
	else
	{
		cout << "False!" << "\n";
	}

}


int main()
{
	string userInput;

	allvowels(userInput);

	return 0;
}

// vim:foldlevel=2
