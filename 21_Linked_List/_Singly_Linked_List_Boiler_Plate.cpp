#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //* Constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

//* Insert at Head (Start)
void insertAtHead(Node* &head, int d) {
    //taking head as reference to make changes to the original head

    // create new node
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;

}

//* Insert at Tail (End)
void insertAtTail(Node* &tail, int d) {

    // create new node
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = temp;

}

void print(Node* head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}