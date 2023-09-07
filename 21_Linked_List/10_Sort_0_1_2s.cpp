#include <iostream>
#include "_Singly_Linked_List_Boiler_Plate.cpp"
using namespace std;

//* Sort a Linked List comprising only of 0s, 1s, 2s
//? Method 1 -> Counting and Replacing
Node* sortList(Node* head) {
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp != NULL) {
        if (temp -> data == 0) {
            zeroCount++;
        }
        else if (temp -> data == 1) {
            oneCount++;
        }
        else if (temp -> data == 2) {
            twoCount++;
        }
        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL) {
        if (zeroCount != 0) {
            temp -> data = 0;
            zeroCount--;
        }
        else if (oneCount != 0) {
            temp -> data = 1;
            oneCount--;
        }
        else if (twoCount != 0) {
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }

    return head;
}

//? Method 2 -> Separate Linked Lists for 0, 1, 2; then merging them

Node* insertAtTail1(Node* &tail, Node* curr) {
    tail -> next = curr;
    tail = curr;
}

Node* sortList2(Node* head) {
    Node* zeroHead = new Node(-1); // dummy node
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1); // dummy node
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1); // dummy node
    Node* twoTail = twoHead;

    Node* curr = head;

    // create separate lists for 0s, 1s, 2s
    while(curr != NULL) {
        int val = curr -> data;

        if (val == 0) {
            insertAtTail1(zeroTail, curr);
        }
        else if (val == 1) {
            insertAtTail1(oneTail, curr);
        }
        else if (val == 2) {
            insertAtTail1(twoTail, curr);
        }

        curr = curr -> next;
    }

    // merge 3 sublists
    // 1s list not empty
    if (oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        // 1s list empty
        zeroTail -> next = twoHead -> next;
    }

    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    head = zeroHead -> next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main()
{
    
    
    return 0;
}