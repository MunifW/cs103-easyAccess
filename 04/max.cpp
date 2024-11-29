/* TODO: write a function which takes three integer parameters and returns
 * the largest one. */

#include <iostream>
using std::cin;
using std::cout;

/* Will make a simple function that compares x, y, and z to find the greatest integer, then return it. */
int largest(int x, int y, int z)
{
	if (x > y && x > z)
	{
		return x;
	}
	else if (y > x && y > z)
	{
		return y;
	}
	else if (z > x && z > y)
	{
		return z;
	}

	return x;
	return y; // I have multiple return statements here because only one of them will be returned one at a time when you input numbers
	return z;
}

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	cout << "Your largest value is: " << largest(x,y,z);

	return 0;
}

// vim:foldlevel=2
