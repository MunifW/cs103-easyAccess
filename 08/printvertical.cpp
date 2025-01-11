/* TODO: write a *recursive* function that takes an integer n and
 * prints the base 10 digits of n "vertically" to stdout.  E.g., if
 * n = 2371, output would be
 * 2
 * 3
 * 7
 * 1
 * */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void vertical(int n)
{
    if(n < 2)
	{  // to check if it's less than 10 letters
        cout << n << "\n";
    }
    else
	{
        vertical(n/10); // we want to divide by 10 to help give us our first values

        cout << (n%10) << "\n"; // We would then print the corresponding one
    }
}

int main()
{
    vertical(1234);

    return 0;
}

// vim:foldlevel=2
