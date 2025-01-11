/* TODO: write a *recursive* function that takes two integers (a,b)
 * and computes a^b (a to the b power).  You can assume the exponent
 * b is nonnegative. */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int pow(int a, int b)
{
    if(b > 0)
	{
        return (pow(a,b-1) * a); // You are basically doing a * a while b is used as a countdown, and stops when it reaches 0.
    }

    return 1;
}

int main()
{
    int a = 2;
    int b = 5;

    cout << pow(a,b);

    return 0;
}

// vim:foldlevel=2
