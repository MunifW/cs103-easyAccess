/* TODO: write a function which takes a vector of integers V (by reference)
 * and reverses its contents.  That is, if V = 1 2 3, then after calling
 * reverse(V), it would contain 3 2 1.  NOTE: the goal is not to print
 * anything, but to rearrange the vector elements in memory. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
void reverse(vector<int> V)
{	
	int values;
	//vector<int> V;
	vector<int> V2;

	cout << "Please input values for the vector. Input -1 to stop: " << "\n";

	while (true)
	{
		cin >> values;

		if (values == -1)
		{
			break;
		}

		V.push_back(values);
	}

	for (int i = V.size() - 1; 0 <= i; i--)
	{
		//cout << "Values of V: " << V[i] << "\n";

		V2.push_back(V[i]);
		V.pop_back();
	}

	for (int j = 0; j < V2.size(); j++)
	{
		V.push_back(V2[j]);
	}


	for (int k = 0; k < V.size(); k++)
	{
		cout << "Values of V: " << V[k] << "\n";
	}


}

int main()
{
	vector<int> V;
	reverse(V);
	/* TODO: call your function, make sure it works... */
	return 0;
}

// vim:foldlevel=2
