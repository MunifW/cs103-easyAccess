/* TODO: write a function which takes a *sorted* vector of integers V
 * and an integer x and performs a *binary search* for x.  The idea is
 * that since the vector is sorted, you can look at the middle element
 * and then rule out half of the vector from the search.  Just keep on
 * doing that until you find x or you run out of places to look. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

// We have not learned about sorting vectors yet within the practice problems... so how would we do it for this problem?

/* A binary search is when you cut an ordered list of numbers in half, and then find the target, if you did not find it the first time you
	cut the vector/list in half, you have to cut it in half once more to keep narrowing down your search.
	
	- Ex: Let's say you have a vector of values from 1 to 10, and you want to find 2. 
		- > You would cut the vector in half, which is now at 5. You see if 5 is bigger, lesser, or equal to 2. 5 is bigger, so you ignore the
			numbers 5, 6, 7, 8, 9, and 10, then only look into 1 - 4. 
				Since 2 is in the middle of 1 - 4, you have to cut it in half once more.
*/ 

// THIS CODE IS INCORRECT! USE V.SIZE() / 2 TO CUT VECTOR IN HALF

void search(vector<int> storage)
{
	int values = 0;
	int x = 0;

	cout << "Please input values into the vector! Type -1 to stop" << "\n";

	while (true)
	{
		cin >> values;

		if (values == -1)
		{
			break;
		}

		storage.push_back(values);
	}

	cout << "Please input the number you want to find: " << "\n";
	cin >> x;

	for (int i = 0; i < storage.size(); i++)
	{
		if (x == storage[i])
		{
			cout << "You found it!" << "\n";
		}
	}

}

int main()
{
	vector<int> storage;

	search(storage);

	return 0;
}

// vim:foldlevel=2
