/* TODO: write a function which takes two vectors of integers V1 and V2,
 * *which you assume will be SORTED*.  (That is, i<=j ==> V1[i]<=V1[j], and
 * similarly for V2).  The function should merge these two vectors into a
 * third vector which is also sorted.
 * NOTE: do NOT do this by just adding all elements into the 3rd vector and
 * then sorting that.  You can do this much more efficiently since the input
 * vectors are sorted already.  Your function should take a number of steps
 * proportional to the sum of the sizes of V1 and V2.  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void merge(vector<int>& V1, vector<int>& V2);


/* I would probably let the user input values into two vectors, and then I would sort those two vectors...
	Next, you make a double for loop and compare each value within the indexs of each vector. If a certain value at an index is smaller
		than the other, then push_back into another vector.  */


int main()
{
	vector<int> myVec1;
	vector<int> myVec2;

	merge(myVec1, myVec2);

	return 0;
}

void merge(vector<int>& V1, vector<int>& V2)
{
	vector<int> V3;
	int values1 = 0;
	int values2 = 0;
	int count = 0;
	int temp = 0;

	cout << "Please input values for the first vector! Type -1 to stop inputting values." << "\n";

	while (true)
	{
        cin >> values1;

        if (values1 == -1)
        {
            break;
        }

		V1.push_back(values1);
	}

	cout << "Please input values for the second vector! Type -1 to stop inputting numbers." << "\n";

	while (true)
	{
        cin >> values2;

        if (values2 == -1)
        {
            break;
        }

		V2.push_back(values2);
	}

	// Start the sorting process for each vector below...

	while (true)
	{
		for (size_t i = 0; i < V1.size() - 1; i++)
		{
			if (V1[i] > V1[i + 1])
			{
				temp = V1[i];
				V1[i] = V1[i + 1];
				V1[i + 1] = temp;

				count++;
			}
		}

		for (size_t j = 0; j < V2.size() - 1; j++)
		{
			if (V2[j] > V2[j + 1])
			{
				temp = V2[j];
				V2[j] = V2[j + 1];
				V2[j + 1] = temp;

				count++;
			}
		}

        if (count == 0)
        {
            break;
        }

        count = 0;
	} 


	// Merge Vectors Below:

#if 0
	for (size_t k = 0; k < V1.size(); k++)
	{
		for (size_t m = 0; m < V2.size(); m++)
		{
			if (V1[k] > V2[m])
			{
				V3.push_back(V2[m]);
			}
			else if (V2[m] > V1[k])
			{
				V3.push_back(V1[k]);
			}
			else if (V1[k] == V2[m])
			{
				V3.push_back(V1[k]);
				V3.push_back(V2[m]);
			}
		}

	}
#endif

	if (V1.size() > V2.size())
	{
		for (size_t k = 0; k < V1.size(); k++)
		{
			if (V1[k] > V2[k])
			{
				V3.push_back(V2[k]);
			}
			else if (V2[k] > V1[k])
			{
				V3.push_back(V1[k]);
			}
			else if (V1[k] == V2[k])
			{
				V3.push_back(V1[k]);
				V3.push_back(V2[k]);
			}
		}
	}
	else if (V2.size() > V1.size())
	{
		for (size_t k = 0; k < V2.size(); k++)
		{
			if (V1[k] > V2[k])
			{
				V3.push_back(V2[k]);
			}
			else if (V2[k] > V1[k])
			{
				V3.push_back(V1[k]);
			}
			else if (V1[k] == V2[k])
			{
				V3.push_back(V1[k]);
				V3.push_back(V2[k]);
			}
		}
	}

	

	for (size_t l = 0; l < V3.size(); l++)
	{
		cout << "Values or vector V3: " << V3[l] << "\n";
	}





}


// vim:foldlevel=2
