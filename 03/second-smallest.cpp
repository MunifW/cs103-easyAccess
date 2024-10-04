/* TODO: write a small program that will read integers from standard input (cin)
 * and print the *second smallest* integer to standard output (cout).
 * NOTE: this might be a little challenging.  Be sure to work out your process
 * clearly on paper (say using the post-it note model) before trying to write
 * any code. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* First figure out how to print out the smallest integer first. */

	int x;

	while (cin >> x)
	{
		cout << "Current x value: " << x << "\n";
	}

	return 0;
}

// vim:foldlevel=2
