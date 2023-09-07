#include <iostream>
#include "_Singly_Linked_List_Boiler_Plate.cpp"
using namespace std;

//* Merge Two Sorted LL; and the merged list should also be Sorted

Node* solve(Node* first, Node* second) {
    
    // if only one element is present in first list
    if (first -> next == NULL) {
        first -> next = second;
        return first;
    }
    
    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    Node* curr2 = second;
    Node* next2 = curr2 -> next;

    while(next1 != NULL && curr2 != NULL) {

        if ((curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data)) {
            // add node in between the first list nodes
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;

            // update pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            curr1 = next1;
            next1 = next1 -> next;
            
            // if first is finished then attaching second to first
            if (next1 == NULL) {
                curr1 -> next = curr2;
                return first;
            }
        }

    }
    return first;
}

Node* sortTwoLists(Node* first, Node* second) {
    if (first == NULL) {
        return second;
    }
    if (second == NULL) {
        return first;
    }

    // first list will be the one having smaller first node
    if (first -> data <= second -> data) {
        return solve(first, second);
    }
    else {
        return solve(second, first);
    }
}

int main()
{
    
    
    return 0;
}