/* TODO: write a function which takes a vector of integers V and a target
 * value t and returns true if and only if there are indexes i != j such
 * that V[i]+V[j] == t.  Bonus question: find a way find a way to modify
 * your function so that the caller can also see what values of i,j work
 * in the case where the return value is true.  The challenge is to figure
 * out how to give 3 outputs from a function instead of just one.
 * HINT: maybe think about value vs reference parameters...  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* Make a function with return value bool, and inside the function, make a vector that takes inputs from the user, as well as another integer 
	input that will be compared to. 

	For the actual comparison, maybe make a for loop within a while loop that constantly */

void vectorSum (vector<int>& V, int t)
{
	int input = 0;

	cout << "Please input integers into the vector!" << "\n";
	
	while (cin >> input)
	{
		V.push_back(input);
	}

	for (size_t i = 0; i < V.size(); i++)
	{
		cout << V[i] << "\n";
	}

	cout << "Please input a number to compare to: " << "\n";
	//cin >> t;

}

int main()
{
	/* TODO: call your function, make sure it works... */

	vector<int> myVec;

	int t = 0;

	vectorSum(myVec, t);

	return 0;
}

// vim:foldlevel=2
