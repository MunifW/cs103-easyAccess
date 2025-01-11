/* TODO: write a function to append a new node with a given value to
 * the end of a list.  NOTE: the return value should be a pointer to
 * the newly allocated node.  This will make it more efficient to
 * construct a list by appending over and over, since you don't have
 * to start from the beginning each time and find the end.  (Although
 * your function should work no matter what, and always find the end
 * of the list before appending).  */
#include <iostream>
using std::cout;
using std::cin;
#include "list-utils.h"

node* append(node* L) 
{
    int x;  // Variable to store the value of the new node
    cin >> x;           

    node* hostage = new node(x); // Create a new node with value `x`


    node* hold = L;  
    while(hold->next != NULL) 
    { 
        hold = hold->next; // Go through the list until the end
    }

    hold->next = hostage; // Link the last node to the new node (`hostage`)

    return NULL;          // Return NULL to satisfy the function signature
}

int main() 
{
    node* test = new node; 
    test->data = 3;        // Assign data to the initial node

    int x; // For user input

    while(cin >> x) 
    { 
        if (x == -1) 
        {
            break; // Exit the loop if -1 is entered
        }

        node* testing = new node; 
        testing->data = x;        
        testing->next = test;     // Point the new node to the current head of the list
        test = testing;           // Update `test` to point to the new node (new head)
    }

    append(test); // Append a new value to the end of the list

    while(test) {
        cout << test->data << " "; // Print the data of the current node
        test = test->next;          
    }

    return 0;
}

// vim:foldlevel=2
