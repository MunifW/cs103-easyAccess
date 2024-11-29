/* Function *prototypes* might seem unnecessary -- after all, as long as you
 * place the function earlier in your file than the places you use it, it'll
 * compile just fine.
 * TODO: come up with a situation where at least one function prototype is
 * *strictly necessary*.  Write functions which demonstrate your idea and
 * make sure what you wrote actually compiles (and will not compile without
 * any function prototypes).
 * BTW, if you need a reminder about prototypes, read here:
 * https://www-cs.ccny.cuny.edu/~wes/CSC103/lingo.html#function-prototype
 * or here:
 * http://www.charlesli.org/pic10a/lectures/lecture8/index.html
 * */

#include <iostream>
using std::cout;
using std::cin; 

// Prototypes are just the heading line of functions... But, how do I find an absolutely neccessary situation where one is needed?

/* The true purpose of prototypes is to call a function when they are used in another function. This will make your life easier instead
	of having to order them in the correct places.*/

int add(int x, int y);

int main()
{
	int a, b;

	cin >> a >> b;

	cout << "Value of z: " << add (a,b) << "\n";

	return 0;
}

int add(int x, int y)
{
	int z = x + y;

	return z;
}

// vim:foldlevel=2
