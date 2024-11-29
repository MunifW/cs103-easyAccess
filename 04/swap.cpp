/* TODO: write a function which takes two integer parameters and swaps
 * their contents.  That is, if for example x==0,y==1, then after calling
 * swap(x,y), it should be the case that x==1,y==0.  */

#include <iostream>
using std::cin;
using std::cout;

/* I believe I can use transitive properties for this. for example, I can do a = b, b = c, therefore a = c. */

void swap(int x, int y)
{
	int t; // You need a temporary placeholder variable to swap values.

	t = x;
	x = y;
	y = t;

	cout << "Your swapped x value is now: " << x << "\n";
	cout << "Your swapped y value is now: " << y << "\n";
}

int main()
{
	/* TODO: write a little test here to make sure your function works. */
	int x, y;
	cout << "Please input integers into x and y" << "\n";
	cin >> x >> y;

	swap(x,y);

	return 0;
}

/* TODO: (bonus question) Can you rewrite your swap function so that it does
 * not use a temporary variable?  (Hint: use algebra/arithmetic...)  */

// vim:foldlevel=2
