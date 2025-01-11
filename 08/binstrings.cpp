/* TODO: write a function (recursion isn't a bad idea) which takes an integer
 * n and returns a vector of all binary strings of length n.
 * E.g., if n = 3, output vector should contain the following strings:
 * 000
 * 001
 * 010
 * 011
 * 100
 * 101
 * 110
 * 111
 * */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

vector<string> binstring(int n)
{ 
    // base case for my code
    if(n == 0)
	{
        return {}; // we should have nothing in the string
    }
    if(n == 1)
	{
        return {"0","1"}; // the length of 1 
    }

    vector<string> smallerStr = binstring(n - 1); // get string of length n-1
    vector<string> result; //this will hold strings of the result 
    for(size_t i = 0; i < smallerStr.size(); i++)
	{
        string str = smallerStr[i]; // get  the value of each element in the recurssive call to be the value in Str
        result.push_back("1" + str); // this is to append 0
        result.push_back("0" + str); // this is to append 1
    }

    return result;
    
}

int main()
{
    int n;
    cout << "provide a num for your length {0,1}^n: ";
    cin >> n;
    vector<string> binstr = binstring(n);
    
    for(size_t i = 0; i < binstr.size(); i++)
	{
        cout << binstr[i] << "\n"; 
    }


    return 0;
}

// vim:foldlevel=2
