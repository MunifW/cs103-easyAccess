/* TODO: write a function that takes a string and counts the words in
 * the string.  You can assume words are only delimited by whitespace
 * characters: ' ', '\t', '\n'.  NOTE: counting spaces does not suffice!
 * Your function should report 2 words for "hello world" or " hello world"
 * or "  hello     world   ". */
/* TODO: (Bonus question) Write another version of the above function which
 * instead of just returning the count of the words, returns a vector of
 * all the words read.  */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* A word should be classified as anything with a space before or after it. 
	-> So I would need to keep a count of all the whitespaces, and add to it. */

// I want the program to see that a space surrounded by letters mean it's a word
// I want it to exclude any space that is not between letters 

void wordCount(string& input)
{
	int count = 0;
	int temp = 0;

	for (size_t i = 0; i < input.size(); i++)
	{
		temp++;

		if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122) || input[i] == 44) // This defines a word is of letters from the alphabet
		{
			if (input[i + 1] == ' ')
			{
				count++;
			}
		}
	}

	//count--;

	cout << "Current count: " << count + 1 << "\n";
}

int main()
{
	string userInput;

	cout << "Please input a sentence or word!" << "\n";
	getline(cin, userInput);

	wordCount(userInput);

	return 0;
}

// vim:foldlevel=2
