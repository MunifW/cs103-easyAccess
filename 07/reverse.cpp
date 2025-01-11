/* TODO: write a function to reverse a linked list.
 * IMPORTANT: your function should NOT allocate any memory.  I want
 * you to do this just by rearranging all the pointers. */
#include <iostream>
using std::cout;
using std::cin;
/* NOTE: the node structure, as well as some utility functions used in
 * main() are in list-utils.h which we include here. */
#include "list-utils.h"

void reverse(node*& L) 
{
    node* prev = NULL;   // Pointer to the previous node, initially set to NULL
    node* current = L;   // Pointer to the current node, starting at the head of the list
    node* next = NULL;   // Pointer to the next node, used to preserve the remaining list during reversal

    // Loop through the list until current becomes NULL
    while(current != NULL) 
    {
        next = current->next; // Save the next node to preserve the remaining list

        current->next = prev; // Reverse the next pointer of the current node to point to the previous node

        prev = current;       // Move the prev pointer forward to the current node
        current = next;       // Move the current pointer forward to the saved next node
    }

    L = prev; // Update the head of the list to the last node (stored in prev)
}

int main() 
{
    node* L = readlist(); // Create a linked list by reading from input

    printlist(L);  // Print the original list to verify its contents
    reverse(L);    // Reverse the linked list using the `reverse` function
    printlist(L);  // Print the reversed list to verify the result

    return 0;
}


// vim:foldlevel=2
