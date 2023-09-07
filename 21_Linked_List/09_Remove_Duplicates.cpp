#include <iostream>
#include <map>
#include "_Singly_Linked_List_Boiler_Plate.cpp"
using namespace std;

//* Remove Duplicates from Sorted Linked List
Node* removeDuplicatesSortedList(Node* head) {
    //empty list
    if (head == NULL) {
        return NULL;
    }

    Node* curr = head;

    while(curr != NULL) {
        if ((curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr -> next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else {
            curr = curr -> next;
        }
    }
    return head;
}

//* Remove Duplicates from Unsorted Linked List
Node* removeDuplicatesUnSortedList(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    map<int, bool> visited;
    Node* temp = head;
    visited[temp -> data] = true;

    while(temp != NULL) {
        // means the element is already present
        if (temp -> next != NULL && visited[temp -> next -> data] == true) {
            Node* next_next = temp -> next -> next;
            Node* nodeToDelete = temp -> next;
            delete(nodeToDelete);
            temp -> next = next_next;
        }
        else {
            visited[temp -> next -> data] = true;
            temp = temp -> next;
        }
    }
    return head;
}

int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    insertAtTail(tail, 5);
    insertAtTail(tail, 7);
    insertAtTail(tail, 7);

    print(head);

    // Node* uniqueList1 = removeDuplicatesSortedList(head);
    Node* uniqueList2 = removeDuplicatesUnSortedList(head);
    print(uniqueList2);
    
    return 0;
}