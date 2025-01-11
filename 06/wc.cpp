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

void wordCount(string& input)
{
	int count = 0;

	for (size_t i = 0; i < input.size(); i++)
	{

		if (input[i] >= 33 && input[i] <= 126) // Every form of grammar and letter makes up a word. WIll only look for things that make up a word.
		{
			if (input[i + 1] == ' ') // If the next position past the letter is a space, then it is most likely a word.
			{
				// For every space that has a letter before and after it, it is probably a word.

				count++;
			}
		}
	}

	count++; // For every one space surrounded by letters, there are two words... so the conut is that space + 1

	// input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122) || input[i] == 44

	cout << "Word count: " << count << "\n";
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
