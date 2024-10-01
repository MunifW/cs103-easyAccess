#include <iostream>
using std::cin;
using std::cout;

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

	for (int i = 0; i < n - 1; i++) //Controls rows
	{
		//cout << "*";

		cout << "i";

		for (int j = 0; j < m; j++) //Controls columns
		{
			//cout << "*";
			cout << "j";

			if (i)
			{
				cout << "k";
			}
			else
			{
				//cout << " ";
			}

		}

		cout << "\n";
	}


	return 0;
}

/* Bonus question: change the above so you get a "hollow" rectangle.
 * E.g. if n==4 and m==5, you would have this: */
// * * * * *
// *       *
// *       *
// * * * * *


// vim:foldlevel=2
