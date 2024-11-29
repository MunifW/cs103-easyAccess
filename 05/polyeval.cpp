/* TODO: Write a function that evaluates a polynomial at a given input.
 * To represent the polynomial, use a vector (say of integers) which will
 * correspond to the coefficients.  That is, if your polynomial is:
 * f(X) = C_0 + C_1*X + C_2*X^2 + ... + C_d*X^d
 * then f would be given as a vector C such that C[i] = C_i.
 * For your function, please use the prototype given below.
 * */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

int polyeval(vector<int>& C, int x);

int main()
{
	vector<int> myVec;
	int input = 0;
	int output = polyeval(myVec, input);

	cout << "Your total is: " << output << "\n";

	return 0;
}

int polyeval(vector<int>& C, int x)
{
	int values = 0;
	int total = 0;
	int currentPower = 1;

	cout << "Please input coefficents into your function! Type -1 to stop." << "\n";

	while (true) // Taking input from the user and putting it into the vector
	{
		cin >> values;
		if (values == -1)
			break;

		C.push_back(values);
	}

	cout << "Please input a value for x!" << "\n";
	cin >> x; // Getting value of x

	for (size_t i = 0; i < C.size(); i++)
	{
		if (i == 0) // If i equals 0, then just add the first coeffiecent to total.
			total += C[i];
		else
		{
			currentPower *= x; // Otherwise, use the for loops index to update currentPower. Each index represents a +1 to the power of X. 
			total += (C[i] * currentPower); // Add it to total.
		}
	}

	return total;
}

