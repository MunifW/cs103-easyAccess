/* TODO: write a function to copy a linked list.  The function should
 * return a pointer to the copy.  To be clear, you need to allocate new
 * memory for each node -- the pointer you return should not share any
 * nodes with the input parameter.  */
#include <iostream>
using std::cout;
using std::cin;
/* NOTE: the node structure, as well as some utility functions used in
 * main() are in list-utils.h which we include here. */
#include "list-utils.h"

node* copy(node* L) 
{
    // Check if the input list is empty
    if (L == NULL) 
    {
        return NULL; // Return NULL for an empty input list
    }

    // Create a new node for the head of the copied list with the data of the first node in `L`
    node* Copy = new node(L->data);

    // Pointer `hold` is used to build the copied list, starting at the head (`Copy`)
    node* hold = Copy;

    // Pointer `p` starts at the second node in the original list
    node* p = L->next;

    // Loop through the original list to copy each node
    while (p) {
        hold->next = new node(p->data); // Create a new node with `p->data` and link it to the copied list
        p = p->next;                   // Move `p` to the next node in the original list
        hold = hold->next;             // Move `hold` to the newly created node in the copied list
    }

    // Return the head of the copied list
    return Copy;
}

// Alternative implementation (commented out in your code):
// This code copies the list in reverse order.
// It creates a new list with nodes prepended, reversing the order of the nodes.
/*
node* New = NULL;
for(node* p = L; p != NULL; p = p->next) {
    New = new node(p->data, New); // Prepend each new node to the list
}
*/

int main() {
    // Read a linked list from standard input using a utility function `readlist`
    node* L = readlist();

    // Print the original list to verify its contents
    printlist(L);

    // Copy the linked list using the `copy` function
    node* C = copy(L);

    // Print the copied list to verify that it matches the original
    printlist(C);

    // Return success status
    return 0;
}
// vim:foldlevel=2
