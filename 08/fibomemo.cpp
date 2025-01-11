/* TODO: write a recursive function to compute terms of the Fibonacci sequence,
 * but make it efficient (or at least, not terribly inefficient) by way of
 * "memoization".  That is, add some memory to your function, perhaps in the
 * form of a static variable of type vector<int>.  Then, before making any
 * recursive calls, check the vector to see if you haven't computed that term
 * before.  In case you need more to go on, the idea is that your vector (let's
 * call it A for "answers") should be such that if n < A.size(), then A[n]
 * is the n-th term in the sequence.  */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

int fib(int n)
{
	// These are base cases
    vector<int> fibStorage = {1, 1};
    // 1, 1, 2, 3, 5, 8

    if (n < 0) // Edge Case
    {
        return 0;
    }
    if (n < fibStorage.size()) // Base Case
    {
        return fibStorage[n];
    }


#if 0
    if(n == 0)
	{
        return 0;
    }
    if(n == 1)
	{
        return 1;
    }

    return fib(n-1) + fib(n-2); // To do the fib sequence, you have to do the last two sequences added together to get a new one.
#endif

    /* To do memoization, you would create a vector, where you would store each value in the fibo sequence */
}

int main()
{
    cout << fib(55);
    return 0;
}

// vim:foldlevel=2
