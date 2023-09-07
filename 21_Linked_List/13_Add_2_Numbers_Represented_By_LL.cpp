#include <iostream>
#include "_Singly_Linked_List_Boiler_Plate.cpp"
using namespace std;

//* Add 2 numbers represented by Linked Lists
Node* reverse(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail1(Node* &head, Node* &tail, int val) {
    Node* temp = new Node(val);

    if (head == NULL) {
        head = temp;
        tail = temp;
        return;
    }
    else {
        tail -> next = temp;
        tail = temp;
    }
}

Node* add(Node* first, Node* second) {
    int carry = 0;

    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL || second != NULL || carry != 0) {
        int val1 = 0;
        if (first != NULL) {
            val1 = first -> data;
        }

        int val2 = 0;
        if (second != NULL) {
            val2 = second -> data;
        }

        int sum = carry + val1 + val2;

        int digit = sum % 10;

        // create node and add in answer linked list
        insertAtTail1(ansHead, ansTail, digit);

        carry = sum / 10;

        if (first != NULL) {
            first = first -> next;
        }
        if (second != NULL) {
            second = second -> next;
        }
    }
    return ansHead;
}

Node* addTwoLists(Node* first, Node* second) {
    //step1 -> reverse input LL
    first = reverse(first);
    second = reverse(second);

    //step2 -> add both the lists
    Node* ans = add(first, second);

    //step3 -> reverse ans
    ans = reverse(ans);

    return ans;
}

int main()
{
    Node* node1 = new Node(3);
    Node* head1 = node1;
    Node* tail1 = node1;
    insertAtTail(tail1, 4);

    Node* node2 = new Node(2);
    Node* head2 = node2;
    Node* tail2 = node2;
    insertAtTail(tail2, 3);
    insertAtTail(tail2, 0);

    Node* ans = addTwoLists(head1, head2);
    print(ans);
    
    return 0;
}