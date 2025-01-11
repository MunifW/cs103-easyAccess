/* TODO: Write a function that applies a random permutation to the string
 * given as input.  E.g., if the input string was s = "abcdefg", then after
 * calling this function on s, you might have s = "cafebdg" (same letters,
 * but in a random order).  You should try to make every permutation equally
 * likely to happen (assuming rand() were really random).  One easy strategy
 * is as follows, where n is the length of the string:
 * 1. Choose a random index i from 0..n-1 and swap s[i] <--> s[0].
 * 2. Choose another random index from 1..n-1, and swap s[i] <--> s[1].
 * 3. ...
 * If you think about it, every reordering will be equally likely.  Remember,
 * you can get random numbers using rand(), but you will have to think a tiny
 * bit to get the random indexes you want.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* Basically need to find a way to randomize indexs within the bounds of the string size */

void perm(string& input)
{
	int randomIndex = 0;
	int temp = 0;

	for (size_t i = 0; i < input.size(); i++)
	{
		randomIndex = rand() % input.size(); // From discrete math, a number modulo another number should always be from (0...n-1)

		temp = input[i];
		input[i] = input[randomIndex]; // Swapping the placements of the first index with a random index 
		input[randomIndex] = temp;

	}

	cout << "Your string: " << input << "\n";
}

int main()
{
	srand(time(NULL)); // Makes rand() truly random

	string userInput;

	cout << "Please input a string" << "\n"; // getting string from user
	getline(cin, userInput);

	perm(userInput);

	return 0;
}

// vim:foldlevel=2
