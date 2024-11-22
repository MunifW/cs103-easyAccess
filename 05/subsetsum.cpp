/* TODO: write a function which takes a vector of integers V and a target
 * value t and returns true if and only if there are indexes i != j such
 * that V[i]+V[j] == t.  Bonus question: find a way find a way to modify
 * your function so that the caller can also see what values of i,j work
 * in the case where the return value is true.  The challenge is to figure
 * out how to give 3 outputs from a function instead of just one.
 * HINT: maybe think about value vs reference parameters...  */

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* 
Make a function with return value bool, and inside the function, make a vector that takes inputs from the user, as well as another integer 
	input that will be compared to. 

For the actual comparison, maybe make a for loop within a while loop that constantly adds up all the contents with each other?
*/

void vectorSum (vector<int>& V, int t)
{
	string checker;

	int input = 0;

	int total = 0;

	cout << "Please input a number to compare to: " << "\n";
	cin >> t;

	cout << "\n";

	cout << "Please input integers into the vector!" << "\n";
	
	while (cin >> input) // Will put user input into vector V
	{
		V.push_back(input);
	}

	for (size_t i = 0; i < V.size(); i++) // These two for loops will add up each index value
	{
		for (size_t j = 0; j < V.size(); j++)
		{
			total = V[i] + V[j];

			// cout << "Current i index value: " << V[i] << "\n";
			// cout << "Current j index value: " << V[j] << "\n";
			// cout << "Current Total: " << total << "\n";
				
			if (total == t) // If the total equals t, then return checker and break.
			{
				checker = "True";

				break;
			}
			else
			{
				checker = "False";
			}
		}

	}

	cout << "The status of your comparison... " << checker << "\n";

	/* 
	I am too lazy to do the bonus question, but my assumption would be that I would have to print out
		the index values that equal to t within my if statement. 
	*/
}



int main()
{
	vector<int> myVec;

	int t = 0;

	vectorSum(myVec, t);

	return 0;
}

// vim:foldlevel=2
