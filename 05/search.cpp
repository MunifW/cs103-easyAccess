/* TODO: write a function which takes a vector of integers V and an integer x
 * and returns a boolean indicating whether or not x was found in the elements
 * of V. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

bool present(int n, int x)
{
	bool checker;
	int count = 0;

	cout << "How many indices do you want?\n";
	cin >> n;

	cout << "\n";

	vector<int> numbers(n);

	for (int i = 0; i < numbers.size(); i++)
	{
		cin >> numbers[i];
	}

	for (int j = 0; j < numbers.size(); j++)
	{
		if (x == numbers[j])
		{
			count++;	
		}
	}

	if (count == 1)
	{
		checker = true;
	}
	else
	{
		checker = false;
	}

	return checker; 
}

int main()
{
	/* TODO: call your function, make sure it works... */
	
	bool answer = present(5,3);

	if (answer == 1)
	{
		cout << "X was found!\n";
	}
	else
	{
		cout << "X was not found...\n";
	}
	
	return 0;
}

// vim:foldlevel=2
