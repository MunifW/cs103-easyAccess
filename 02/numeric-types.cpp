#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* TODO: investigate the following questions (by writing a bit
	 * of code here and then compiling and running it):
	 * 1. What happens if you assign a floating point value to an
	 *    integer variable?
	 * 2. What about assigning an integer to floating point?  Can
	 *    you think of any way it could go wrong?  (Here, "wrong"
	 *    means "surprising" or unintuitive.)  Hint: read the
	 *    IEEE format and you'll see that you might have issues
	 *    with large integers.
	 * 3. What type of result do you get when adding or multiplying
	 *    floating point values with integers? */

	//Question 1:

	int x = 3.1;
	cout << x << "\n";
	cout << "" << "\n";

	/*It seems as if the integer value just drops anything after the decimal point.*/

	//Question 2:

	float y = 333333333333333;
	cout << y << "\n";
	cout << "" << "\n";

	/*When it comes to small integers, it will print it out fine, but when it comes to huge numbers, it will turn it into 
	scientific notation.*/

	//Question 3:

	int z = 3.1 + 5;
	int f = 2.1 * 2;

	cout << z << "\n";
	cout << f << "\n";

	/*Multiplying and adding floating point numbers within integer variables will cause for the decimal numbers to be cut off.*/





	return 0;
}

// vim:foldlevel=2
