/* TODO: write a function which takes a vector of integers V and an
 * integer d and returns another vector containing only the elements
 * of V which are divisible by d.  ("x is divisible by d" means that
 * there exists another integer q such that x == dq.  That is, when
 * you divide x by d, there's no remainder.) */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
void divisible()
{
	int values = 0;		 // The var the user will input values into the indices for
	int d = 0;			 // The value that will divide the values within V
	vector<int> V; 		 // Takes in user input
	vector<int> divideV; // Outputs the divisible numbers

	cout << "Please input values for your vector! Type -1 to finsih inputting: " << "\n";

	while (true)		// Loop will take in values from the user and will push it into the vector
	{ 
		cin >> values;

		if (values == -1)
		{
			break;
		}

		V.push_back(values);
	}

	cout << "What integer do you want to divide your values by?: " << "\n"; //Will take in the value that find the divisible 
	cin >> d;

	cout << "\n";

	for (int i = 0; i < V.size(); i++) // Will divide all the indices by the input and if reminder = 0 then it will add into new vector
	{
		if (V[i] % d == 0)
		{
			divideV.push_back(V[i]);
		}
	}

	for (int j = 0; j < divideV.size(); j++) // Will print out each index
	{
		cout << "Your new vector: " << divideV[j] << "\n";
	}

}

int main()
{
	/* TODO: call your function, make sure it works... */
	//divisible();
	int t;
	int y;
	int x;

	y = t;
	x = y;
	t = x;

	cout << "t is: " << t << "\n";
	cout << "y is: " << y << "\n";
	cout << "x is: " << x << "\n";
	return 0;
}

// vim:foldlevel=2
