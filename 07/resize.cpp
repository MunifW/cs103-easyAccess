/* TODO: write a function to resize a dynamically allocated array.
 * Prototype is given below.  Remember: the basic steps are as follows:
 * 1. Allocate a new chunk of memory of the desired size.
 * 2. Copy elements from the old array to the new one.
 * 3. Free the old one (delete).
 * 4. Redirect the pointer to the new array.
 * NOTE: your function should work even if newsize < oldsize.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void resize(int*& A, size_t oldsize, size_t newsize)
{
    int* temp = new int[newsize]; // Want to  create a new dynamic array with more space

    for (size_t i = 0; i < oldsize; i++)
    {
        temp[i] = A[i]; // Want to move old array values into new one
    }

    delete[] A; // Free up memory by deleting the old array

    A = temp; // Point pointer A towards new array to basically keep the old array
}

int main()
{
	int* pA = NULL;

   size_t input, count, oldsize, newsize, prevCount = 0; //prevCount holds the last filled position in the array, so half of newsize basically

   char choice = ' '; // For breaking out of the loop

   cout << "Please input a size for your original array!" << "\n";
   cin >> oldsize;

   pA = new int[oldsize]; // Creates the intitial array to start the process

   while (true)
{
    cout << "Please input values into your array!" << "\n";

    for (size_t i = prevCount; i < oldsize; i++) //prevCount is 0 in first iteration, but will be the last filled position in future iterations
    {
        cin >> input;

        pA[i] = input; // Putting user input into the array

        count++; // Keeping track of how big the array is basically
    }

    cout << "Original array: "; // Prints the original array
    for(size_t i = 0; i < oldsize; i++)
    {
        cout << pA[i] << " ";
    }
    cout << endl;

    if (count == oldsize) // If the array is full, then doubly increase the new array
    {
        newsize = oldsize * 2;
        resize(pA, oldsize, newsize);
        prevCount = oldsize; // Keep track of the last filled position/index
        oldsize = newsize; // Update the old position to the new amount of positions
    }

    cout << "Grown array: "; // Print out new array
    for(size_t i = 0; i < prevCount; i++) 
    {
        cout << pA[i] << " ";
    }
    cout << endl;

    cout << "Do you want to continue growing your array? Type Y or N" << "\n"; // Breaking out of the loop
    cin >> choice;

    if (choice == 'Y' || choice == 'y')
    {
        continue;
    }
    else
    {
        break;
    }
 
}

	delete[] pA; // For cleaning up

	return 0;
}

// vim:foldlevel=2
