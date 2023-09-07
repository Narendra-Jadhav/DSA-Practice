#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertNode(Node* &head, vector<int> arr) {
    Node* h = head;
    for (auto x : arr) {
        Node* temp = new Node(x);
        h -> next = temp;
        h = h -> next;
    }
}

void print(Node* head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

//* Reverse a Linked List
//? Method - 1 -> Iterative
Node* reverseLinkedList(Node* head) {

    // if (head == NULL || head -> next == NULL) { // no need of this
    //     return head;
    // }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL) {
        forward = curr -> next; // storing next of current in forward as after curr->next=prev we will lose track of other part
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    // finally last node should be first and prev will be last, so head=prev return prev
}

//? Method 2 -> Recursive
void reverseLinkedListRecursive(Node* &head, Node* curr, Node* prev) {

    //base case
    if (curr = NULL) {
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverseLinkedListRecursive(head, forward, curr);
    curr -> next = prev;
}

//? Method 3 -> Recursive 2 - IMP
Node* reverseLinkedListRecursive2(Node* head) {
    // base case
    if (head == NULL || head -> next == NULL) {
        return head;
    }

    // head of smaller reversed list
    Node* chotaHead = reverseLinkedListRecursive2(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return chotaHead;
}

int main()
{
    Node* head = new Node(2);
    vector<int> arr = {3, 5, 7, 9};

    insertNode(head, arr);
    print(head);

    // Node* prev = reverseLinkedList(head);
    // print(prev);

    // Node* prev = NULL;
    // Node* curr = head;
    // reverseLinkedListRecursive(head, curr, prev);
    // print(head);

    Node* rev = reverseLinkedListRecursive2(head);
    print(rev);
    
    return 0;
}