/* TODO: write a function that clears a list, freeing all the memory it used.
 * Prototype is given below.  */
#include <iostream>
using std::cout;
using std::cin;

struct node {
	int   data;
	node* next;
	/* constructor, in case you want to use it: */
	node(int d=0, node* n=NULL) : data(d), next(n) {}
};

void clear(node*& L) 
{
    while(L) 
    { 
        node* p = L; 
        
        L = L->next; 
        
        delete p; // Delete the current node to free memory 
    }
}

int main() 
{
    
    node* L = NULL; 

    int x; // For user input

    while (cin >> x)
    { 
        L = new node(x, L); // Create a new node with value `x` and add it to the front of the list
    }

    
    node* p = L; // Temp pointer `p` to traverse and print the list 

    while (p) 
    { 
        cout << p->data << " "; // Printing out values
        p = p->next;            
    }
    cout << "\n";

    clear(L); // Call the `clear` function to delete the list and free memory

    p = L; // Reuse `p` to verify that the list is now empty 

    while (p) { 
        cout << p->data << " "; // This loop should not run because the list is now empty
        p = p->next; 
    }
    cout << "\n";

    return 0;
}

// vim:foldlevel=2
