/* TODO: write a function which takes a vector of integers V and places
 * the elements in sorted order (that is, i<=j ==> V[i]<=V[j]).
 * NOTE: there is a simple solution in l3.pdf if you get stuck, but it's
 * a pretty good exercise if you work it out yourself. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void sort(vector<int>& V)
{
	int values = 0;
	int temp = 0;
	int count = 0;

	cout << "Please input values into your vector!" << "\n";

	while (cin >> values)
	{
		V.push_back(values);
	}


	while (true) // To continue the swap continuously
	{
		for (size_t i = 0; i < V.size() - 1; i++)
		{
			if (V[i] > V[i + 1]) // If the starting index is bigger than the next one, swap the places
			{
				temp = V[i];
				V[i] = V[i + 1];
				V[i + 1] = temp;

				count++; // Keep a count of how many times you swap
			}
		}

		if (count == 0) // When the swapping it done, break out.
		{
			break;
		}

		count = 0; // Do this to reset the count over and over so that the while loop actually finishes
	}

	for (size_t j = 0; j < V.size(); j++) // Print the vector out
	{
		cout << "Values for vector V: " << V[j] << "\n";
	}
}

int main()
{
	vector<int> myVec;

	sort(myVec);

	return 0;
}

// vim:foldlevel=2
