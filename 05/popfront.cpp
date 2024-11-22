/* TODO: write a function called "pop_front" which will remove the first
 * element of a vector.  NOTE: unlike pop_back, which is a *member function*
 * of the vector, your function will take a vector parameter.  So instead of
 * calling V.pop_front(), you would do pop_front(V).  Use the function header
 * given below. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here: */
void pop_front(vector<int>& V)
{
	int values = 0;
	vector<int> swap;

	cout << "Please input values for your vector. Type -1 to stop inputting: " << "\n";

	while (true)
	{
		cin >> values;

		if (values == -1) // Need to remember why this is better than putting cin >> values within the while loop
		{
			break;
		}

		V.push_back(values); // Pushing input values into the front of the vector
	}

	for (int i = V.size() - 1; 0 <= i; i--) //This for loop needs to put the reverse integers into swap, then use another for loop to 
	{
		swap.push_back(V[i]); // Putting all the contents of V into swap in reverse order

		V.pop_back(); // Emptying out vector V for the future transfer... 
						//Why doesn't this affect the for loop though? I am making v.size() smaller.
	}

	swap.pop_back();

	for (int k = swap.size() - 1; 0 <= k; k--)
	{
		V.push_back(swap[k]); // Reversing the reversal of vector swap and putting it back into the newly empty V vector
	}

	for (int j = 0; j < V.size(); j++)
	{
		cout << "New vector V values: " << V[j] << "\n"; // Seeing if it worked
	}
}

int main()
{
	/* TODO: call your function, make sure it works... */
	vector<int> myVec;

	pop_front(myVec);

	return 0;
}

// vim:foldlevel=2
