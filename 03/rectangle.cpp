#include <iostream>
using std::cin;
using std::cout;
using namespace std;

/* TODO: read two integers n,m and draw (using some for loops) a
 * rectangle of '*' characters that is nxm.  E.g. if n = 3, m = 4
 * then output would be like this: */
// * * * *
// * * * *
// * * * *

int main()
{
	int n = 0;
	int m = 0;

	cout << "Please input a number for n: " << "\n";
	cin >> n;

	cout << "Please input a number for m: " << "\n";
	cin >> m;

#if 0 //Code for regular rectangle
	for (int i = 0; i < n; i++)
	{
		cout << "*";

		for (int j = 0; j < m; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
#endif

	// for (int i = 0; i < n; i++) 
	// {
	// 	for (int j = 0; j < m; j++) 
	// 	{
	// 		printf("(%i,%i) ",i,j);
	// 		// cout << "(" << i << "," << j << ") ";
	// 	}
	// 	printf("\n");
	// }

	/*
	I want:
	ijjj
	i  j
	ijjj
	*/

	for (int i = 0; i <= n; i++) //Controls rows
	{
		for (int j = 0; j <= m; j++) //Controls columns
		{
			if (i == 0 || i == n || j == 0 || j == m)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

/* Having i <= n and j <= m works, but if you did not have the less than/greater than equal sign in there, you would need to have i == n - 1 or
	j == m - 1 within your if statement to make it work.
	
	This is because for loops start from 0, so your last column and last row that you'd want to target has to be one less than your input
*/

	return 0;
}

/* Bonus question: change the above so you get a "hollow" rectangle.
 * E.g. if n==4 and m==5, you would have this: */
// * * * * *
// *       *
// *       *
// * * * * *


// vim:foldlevel=2
