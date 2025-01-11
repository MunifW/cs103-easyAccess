/* TODO: Write a function that takes two pointers to linked lists
 * which you can assume are in SORTED ORDER already.  The function
 * should then build a new list which is also in sorted order and
 * return it.
 * Bonus problem: re-write your function (or make a new version)
 * which does NOT allocate any memory, and instead just re-uses the
 * nodes from the two input lists.  */
#include <iostream>
using std::cout;
using std::cin;
#include "list-utils.h"

node* merge(node* L1, node* L2)
{

    node* both = NULL;

    while(L1 != NULL && L2 != NULL) {

        if(L1->data > L2->data) {  //will make it go in order and each time we updaate it so that the data value its at changes with each iteration

            both = new node(L2->data, both);

            if(L2->next == NULL) { //in case L1 is LONGER

                while(L1 != NULL) { //if L2 next value is NULL then we can just put all the vales of L1 into the new merged list

                    both = new node(L1->data,both);

                    L1 = L1->next;

                }

            }
            else {

            L2 = L2->next;

            }
        }

        else {

            both = new node(L1->data, both);

            if(L1->next == NULL) { //in case L2 is LONGER

                while(L2 != NULL) { //if L1 next value is NULL then we can just put all the vales of L2 into the new merged list

                    both = new node(L2->data,both);

                    L2 = L2->next;

                }

            }
            else {

            L1 = L1->next;
        }

        //~ L1 = L1->next;
        //~ L2 = L2->next;

    }

}
    /* TODO: write me */
    return both; /* just so it compiles... */
}

int main()
{
    /* some test code for your function: */
    node* L1 = buildlist({1,5,7,11,13});
    node* L2 = buildlist({2,3,4,8});
    printlist(L1);
    printlist(L2);
    node* L = merge(L1,L2);
    printlist(L);
    return 0;
}

// vim:foldlevel=2
