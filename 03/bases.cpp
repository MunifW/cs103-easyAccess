/* TODO: write a program that reads an integer b (say b < 10), and
 * another integer n, and then prints a string that represents the
 * integer n in base b.  E.g., if b=7 and n=94, your program would
 * output digits "163", as 94 = 1*49 + 6*7 + 3.  ("361" is also ok if
 * you print the least significant digit first).  Or if b=2 and n=7,
 * then you would print "111" since 7 = 1*4 + 1*2 + 1. */

#include <iostream>
#include <string>
using namespace std;
using std::cin;
using std::cout;

/* This is essentially saying to divide n by the base multiple times and to get the modulo of n using the base in order to get the bases of n.*/

int main()
{
	int n = 0;
	int base = 0;
	int quotient = 0;
	int remainder = 0;
	string output = " ";

	cout << "Please input a number for n: " << "\n";
	cin >> n;

	cout << "Please input a base: " << "\n";
	cin >> base;

	cout << "\n";

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			quotient = n / base;
			remainder = n % base;

			//cout << "Your output is: " << remainder << "\n";

			output = to_string(remainder);

			cout << output;
		}

		remainder = quotient % base;
		quotient = quotient / base;

		//cout << "Your output is: " << remainder << "\n";

		output = to_string(remainder);

		cout << output;

		if (quotient == 0)
		{
			break;
		}
	}


	return 0;
}

// vim:foldlevel=2
