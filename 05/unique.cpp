/* TODO: write a function which takes a *sorted* vector of integers V
 * (that is, i<=j ==> V[i]<=V[j]) and returns a vector of the unique
 * elements of V.  That is to say, all duplicates have been removed.
 * For example, if V = {1,2,2,3,3,3,4}, the resulting vector should
 * contain {1,2,3,4}.  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void unique(vector<int>& V)
{
	int values = 0;
	int temp = 0;
	int count = 0;

	cout << "Please input values into your vector!" << "\n"; 

	while (cin >> values) // Putting user input into the vector
	{
		V.push_back(values);
	}


	while (true) // Sorting through the vector
	{
		for (size_t i = 0; i < V.size() - 1; i++)
		{
			if (V[i] > V[i + 1])
			{
				temp = V[i];
				V[i] = V[i + 1];
				V[i + 1] = temp;

				count++;
			}
		}

		if (count == 0)
		{
			break;
		}

		count = 0;
	}

	cout << "\n";

// I would have to see where the vector repeats, and then move it to the front of the vector to then use pop_back (which removes the last element)

	for (size_t j = 0; j < V.size(); j++)
	{
		if (V[j] == V[j + 1]) // If a position and the positon after it are the same, go into this statement.
		{
			for (size_t k = 0; k < V.size() - 1; k++) // This is not correct, but it achieves the goal...
			{
				temp = V[k];		// I was trying to move the repeated numbers to the end of the for loop, but they did not move correctly.
				V[k] = V[k + 1];
				V[k + 1] = temp;

			}   

			V.pop_back(); // Removes the "repeated" numbers.

		}

		cout << "Values of vector V: " << V[j] << "\n";
	}


}

int main()
{
	vector<int> myVec;

	unique(myVec);

	return 0;
}

/* TODO: bonus question: write another version of this function which
 * actually removes the duplicates from the input vector rather than
 * returning an altogether new vector.  NOTE: you could of course do
 * the same thing as before, and then overwrite your original vector,
 * but that's not what I want.  Don't allocate any other vectors, and
 * don't use the "erase" function either.  Just rearrange the elements
 * somehow and then call V.resize(...). */

// vim:foldlevel=2
