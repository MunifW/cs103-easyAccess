/* TODO: Write a function called "crazycase" which takes a string (by
 * reference) and applies the following transformation: randomly toggle the
 * upper/lower caseness of the letters.  (It's sort of like "camelCase" for
 * variable names and "kebab-case" for naming your files, if you are familiar
 * with those.)   And for good measure, let's also change any periods "." to
 * exclamation marks "!".  For example,
 *
 * "Dragons are merely artifacts of the inane folklore of our ancestors."
 *
 * might become:
 *
 * "DRagonS arE MerELY ArTifACTs of THe iNaNe foLkLOrE Of OuR AnceStOrS!"
 *
 * Your function should randomly *toggle* the case, so even if the original was
 * all upper case, we might get the same result as above.
 * NOTE: you will want to get pseudorandom numbers for this.  The easy way is
 * to use the rand() function from the standard library.  Each time you call
 * rand() you will get a (pseudo)random number from 0..2^31-1.  Note also that
 * the lower case versions of each character are 32 away from the upper case
 * version (e.g., 'a' - 'A' == 'b' - 'B' ... == 32).
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* I want to turn a string into a string with random capitalizaiton.
	-> I need to use the fact that every lowercase letter is 32 away from the uppercase version of it.
	-> I can use rand() % 2 [this will only output 0 or 1] to see if a position of the string should be chosen to be capital or not
	-> If rand() % 2 == 0, then add 32 to the string position and output the string, else just output the string normally
	-> I also need to make an edge case where if the string position is a period, turn it into an exclamation mark.
	-> 
*/

void crazycase (string& input)
{
	int n = 0;

	for (size_t i = 0; i < input.size(); i++)
	{
		n = rand() % 2; // n will either be 1 or 0... this will be used as a way to determine if a certain letter should be capitalized or not

		if (input[i] >= 65 && input[i] <= 90) // This will see if the letters of the input are capital
		{
			if (n == 0) // n equaling zero is how a letter is chosen to be capitalized
			{
				input[i]+= 32; // A lowercase letter + 32 means it turns capital
			}
		}
		else if (input[i] >= 97 && input[i] <= 122) // This will see if the letters of the input are lowercase
		{
			if (n == 0)
			{
				input[i]-= 32; // A capital letter - 32 means a lowercase letter.
			}
		}

		if (input[i] == '.') // Periods get turned into exclamation mark
		{
			input[i] = '!';
		}
	}

	cout << "Your crazycase string: " << input << "\n";
}

int main()
{

	srand(time(NULL)); // This makes rand actually raandom
	
	string input;

	getline(cin, input);

	crazycase(input);
	
	return 0;
}

// vim:foldlevel=2
