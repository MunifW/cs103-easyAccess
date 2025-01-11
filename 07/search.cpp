/* TODO: write a function that takes an integer x and a list, and searches for
 * x in the list, returning a boolean indicating whether or not x was found. */
#include <iostream>
using std::cout;
using std::cin;
/* NOTE: the node structure, as well as some utility functions used in
 * main() are in list-utils.h which we include here. */
#include "list-utils.h"

bool search(node* L, int x) 
{

    for(node* hold = L; hold != NULL; hold = hold->next) 
    { 
        if(hold->data == x) 
        { // Check if the current node's data matches the target value
            return true;
        }
    }

    return false; // Return false if the value is not found after traversing the entire list
}

int main() 
{
    // Build a fixed linked list using the helper function
    node* L = buildlist({1, 3, 5, 7, 9, 11, 13});

    // Print the linked list to verify it was built correctly
    printlist(L);

    int x; // # to look for

    while(cin >> x) { 
        if(search(L, x) == 0)
        {   
            cout << x << " was not found after searching the linked list. \n"; // If the value is not found in the list
        }
        else if(search(L, x) == 1) 
        { 
            cout << x << " was found after searching the linked list. \n"; // If the value is found in the list
        }
    }

    return 0;
}

// vim:foldlevel=2
