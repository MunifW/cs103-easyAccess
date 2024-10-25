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

		if (values == -1)
		{
			break;
		}

		V.push_back(values);
	}

	for (int i = V.size() - 1; 0 <= i; i--) //This for loop needs to put the reverse integers into swap, then use another for loop to 
	{
		//cout << "Current values in vector V: " << V[i] << "\n";
		swap.push_back(swap[i]); //This does not work because swap is still empty as of right now.
		swap.pop_back();
	}

	for (int k = 0; k < swap.size(); k++)
	{

		cout << "Values of swap: " << swap[k] << "\n";
	}

	for (int j = 0; j < V.size(); j++)
	{
		cout << "New vector V values: " << V[j] << "\n";
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
