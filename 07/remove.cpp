/* TODO: write a function that takes an integer and a list, and removes
 * the first occurrence of the integer, if found.  Return value should be
 * whether or not removal happened. */
#include <iostream>
using std::cout;
using std::cin;
/* NOTE: the node structure, as well as some utility functions used in
 * main() are in list-utils.h which we include here. */
#include "list-utils.h"

bool remove(node*& L, int x) {
    node* p = L;       // Pointer p is initialized to the head of the list
    node* q = NULL;    // Pointer q will keep track of the previous node

    while(p && p->data != x) // Traverse the list until p is NULL or the value x is found 
    {
        q = p;         // Update q to the current node
        p = p->next; 
    }

    if(p == NULL) 
    {
        return false;   // If p is NULL, the value x was not found in the list  
    } 

    // If the value x is found, proceed to remove the node
    if(q) 
    { // Check if q is not NULL, as in p is not the first node
        q->next = p->next; // Update the previous node's next pointer to skip p
        delete p;          // Delete current node
    } 
    else 
    { // If q is NULL, the node to remove is the first node
        L = p->next; // Update the head of the list to the next node
        delete p;    // Delete the original head node
    }

    return true; 
}

int main() 
{

    node* L = buildlist({1, 3, 5, 7, 9, 11, 13}); 
    printlist(L); // Print the initial list to verify its contents

    int x; // Variable to hold the value to be removed

    // Loop to read values from the user and attempt to remove them from the list
    while (cin >> x) 
    {
        if(remove(L, x) == 0) 
        { 
            cout << x << " was not REMOVED after searching the linked list. \n";
        } 
        else if(remove(L, x) == 1) 
        { 
            cout << x << " was REMOVED after searching the linked list. \n";
        }
        printlist(L);
    }

    return 0;
}

// vim:foldlevel=2
