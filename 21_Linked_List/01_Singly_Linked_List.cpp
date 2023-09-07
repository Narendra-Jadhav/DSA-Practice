#include <iostream>
using namespace std;

//? Linked List => Collection of Nodes
//* Node -> contains data and Address of next node; i.e pointer of type Node

//* Node Class
class Node {
    public:
    int data;
    Node* next;

    //* Constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //* Destructor
    ~Node() {
        int value = this -> data;
        //* memory free
        if (this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data: " << value << endl;
    }
};

/*
//* empty list
if (head == NULL) {
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
}
*/
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

//* Insert at Middle (at any position)
void insertAtPosition(Node* &head, Node* &tail, int position, int d) {

    // insert at start
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    // traversing till previous node
    while(count < position - 1) {
        temp = temp -> next;
        count++;
    }

    // insert at tail
    if (temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNodeAtPosition(int position, Node* &head, Node* &tail) {

    //* deleting first or start node
    if (position == 1) {
        Node* temp = head;
        head = head -> next;

        //* memory free start node
        temp -> next = NULL; // pointing next to NULL of the deleted node
        delete temp;
    }
    else {
        //* deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        // if we have to delete last node, then pointing tail at prev
        if (curr -> next == NULL) {
            tail = prev;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

}

//* Traversing a Linked List (Printing it)
void print(Node* &head) {

    // creating a copy of head so that changes are not done to head on traversing it
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

//* Length of a Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp -> next;
    }
    return len;
}

int main()
{
    //* Dynamic object creation -> Creating new Node
    Node* node1 = new Node(10);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    //* head and tail pointed to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 17);
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 4, 13);
    print(head);

    insertAtPosition(head, tail, 6, 23);
    print(head);

    deleteNodeAtPosition(1, head, tail);
    print(head);

    deleteNodeAtPosition(5, head, tail);
    print(head);

    cout << "Tail: " << tail -> data << endl;

    return 0;
}