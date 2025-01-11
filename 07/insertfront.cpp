/* Insert a value to the front of the linked list */

#include <iostream>
using std::cout;
using std::cin;

struct node {
	int   data;
	node* next;
	/* constructor, in case you want to use it: */
	node(int d=0, node* n=NULL) : data(d), next(n) {}
};


int main() {
	node *HOLD = new node; // Create a new node, initially an empty placeholder
	HOLD->next = NULL;     // Set the next pointer of this node to NULL

	int x; // For user input

	while(cin >> x) {
		if(x == -1) 
        {
            break; // Exit the loop if the input is -1
        }

		node* p = new node; // Create a new node to hold the input value
		p->data = x;        // Set the data of the new node
		p->next = HOLD;     // Point the new node to the current head of the list
		HOLD = p;           // Update HOLD to point to the new node (basically new head of the list)
	}

	// Loop to print the data of each node in the linked list
	while(HOLD) {
		cout << HOLD->data << "\n"; // Print the data of the current node
		HOLD = HOLD->next;          // Move to the next node
	}

	// This loop does not execute because HOLD is NULL after the previous loop
	while(HOLD) { 
		cout << "TEST \n";    
		cout << HOLD->data << "\n"; // Print the data of the current node
		HOLD = HOLD->next;          // Move to the next node
	}

	while(cin >> x) {
		if(x == -1) 
        {
            break;       // Exit the loop if the input is -1
        }

		node* p = new node;      // Create a new node to hold the input value
		p->data = x;             // Set the data of the new node
		p->next = HOLD;          // Point the new node to the current head of the list
		HOLD = p;                // Update HOLD to point to the new node (new head of the list)
	}

	while(HOLD) {
		cout << HOLD->data << "\n"; // Print the data of the current node
		HOLD = HOLD->next;          // Move to the next node
	}

	return 0;
}

// vim:foldlevel=2
