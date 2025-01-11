/* TODO: write a function which takes a string and returns a boolean indicating
 * whether or not the string was a palindrome.  (Palindromes are strings that
 * do not change when reversed). */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

// The code seems to break when I change the int within the for loops to size_t

bool palindrome(string input)
{
	bool checker;

	string wordOne = " "; // String that will hold the input

	string wordTwo = " "; // String that will hold the reverse input

	for (int i = 0; i < input.size(); i++) // Will put the input into different String
	{
		wordOne = input[i];
	}

	for (int j = input.size(); j >= 0; j--) // Same with previous for loop
	{
		wordTwo = input[j];
	}

	if (wordOne == wordTwo) // Will comepare the first word with the reverse
	{
		checker = true;

		cout << "Is a palindrome!" << "\n";
	}
	else
	{
		checker = false;

		cout << "Not a palindrome!" << "\n";
	}

	return checker;


//  if(wordOne != wordTwo) return false;
//  return true;


}

int main()
{
	string input;

	cin >> input;

	palindrome(input);

	return 0;
}

// vim:foldlevel=2
