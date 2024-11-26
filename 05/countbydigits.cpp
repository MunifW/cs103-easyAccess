/* TODO: Part I: write a little function to count the number of base-10
 * digits of a (long, unsigned) integer.  You can do this just by dividing
 * the number by 10 over and over until you get 0, and seeing how many
 * divisions were required.  There's a prototype below for you to implement.
 * 
 * TODO: Part II: using the function from part I, write a main program that
 * reads integers (size_t type) from stdin, and then prints a frequency table
 * showing how many numbers of each digit length were seen.  For example, if
 * the input were 12 2349 2 99 123991, then you would print out something like
 * the following:
 * 1 : 1
 * 2 : 2
 * 3 : 0
 * 4 : 1
 * 5 : 0
 * 6 : 1
 * NOTE: you can omit the entries in the table where the count is 0 if you'd
 * like.  You can count 0 has having 1 digit or 0 digits.  Also note that the
 * largest 64 bit integer is 18446744073709551615, so your table will have at
 * most 20 entries (or 21, if you consider 0 to have no digits).
 * NOTE: do NOT declare 20 different count variables!  Use a vector to store
 * the counts instead.
 * */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

size_t countdigits(size_t n);

int main()
{
	size_t input = 0;
	size_t digitLength = 0;
	vector<size_t> freq (21); // Make a vector that holds 21 indices since the largest possible input has 21 digits.
	
	cout << "Please input large values!" << "\n";

	while (cin >> input) // Takes user input
	{ 
		digitLength = countdigits(input); // Runs user input into below function to find the length of the input

		freq[digitLength]++; 
		/* 
		Everytime a digitLength is found, the freq vector makes a spot for that length, and then adds 1 everytime to that one spot when
			the same length is seen again.

		- Ex: If n = 2
			The freq vector will make a spot at the 2nd index and will add one everytime n = 2 again.
		*/
	}

	for (size_t k = 0; k < freq.size(); k++)
	{
		if (freq[k] > 0)
		{
			/* This loop will print every index (which stands for the digitLengths) and the index values (# of times seen)*/
			cout << "Digit Variations -> " << k << " : " << freq[k] << " <- # of times seen" << "\n";
		}
	}

	return 0;
}

size_t countdigits(size_t n)
{
	size_t count = 0;

	while (true)
	{
		n = n / 10;

		count++;

		if (n == 0)
		{
			break;
		}
	}

	return count;

}

// vim:foldlevel=2
