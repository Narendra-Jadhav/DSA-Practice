#include <iostream>
using namespace std;

//? Circular Linked List -> Last Node Points to the Head Node

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
        if (this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data: " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    //* empty list
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else {
        //* non-empty list
        // assuming that the element is present in the list
        Node* curr = tail;

        while(curr -> data != element) {
            curr = curr -> next;
        }

        // element found
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}

void deleteNode(Node* &tail, int value) {

    //* empty list
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    else{
        //* non-empty
        // assuming that value is present in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // 1 Node Linked List
        if (curr == prev) {
            tail = NULL;
        }

        // >= 2 Nodes Linked List
        else if (tail == curr) {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }

}

//* Print Circular Linked List
void print(Node* tail) {
    Node* temp = tail;

    //* empty list
    if (tail == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    // we used do while loop because, it was giving problem if only one node is there. So, with do while it will firstly print one node and
    // then come out of the loop
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

int main()
{
    Node* tail = NULL;

    // element will not matter for first node
    insertNode(tail, 0, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 3, 15);
    print(tail);

    insertNode(tail, 7, 10);
    print(tail);

    deleteNode(tail, 3);
    print(tail);
    
    return 0;
}