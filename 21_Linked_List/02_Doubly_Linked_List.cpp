#include <iostream>
using namespace std;

//? Doubly Linked List
//* data, prev, next

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //* Constructor
    Node(int d) {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    //* Destructor
    ~Node() {
        int val = this -> data;
        if (this -> next != NULL && this -> prev != NULL) {
            delete next;
            delete prev;
            this -> next = NULL;
            this -> prev = NULL;
        }
        cout << "Memory is free for node with data: " << val << endl;
    }
};

//* Traversing a Linked List (Printing it)
void print(Node* head) {
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

void insertAtHead(Node* &head, Node* &tail, int d) {
    //* empty list
    if (head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
        Node* temp = new Node(d);

        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d) {
    //* empty list
    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else {
        Node* temp = new Node(d);

        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {

    //* Insert at start
    if (position == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    //* Insert at last
    if (temp -> next == NULL) {
        insertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

void deleteNode(Node* &head, Node* &tail, int position) {
    //* deleting first/start node
    if (position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else {
        //* deleting middle or last node
        Node* curr = head;
        Node* pre = NULL;
        int cnt = 1;

        while(cnt < position) {
            pre = curr;
            curr = curr -> next;
            cnt++;
        }
        //* deleting last
        if (curr -> next == NULL) {
            pre -> next = curr -> next;
            curr -> prev = NULL;
            delete curr;

            tail = pre;
        }
        else{
            pre -> next = curr -> next;
            curr -> next -> prev = pre;
            curr -> next = NULL;
            curr -> prev = NULL;
            delete curr;
        }
    }
}

int main()
{
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    //* if linked list is empty
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 14);
    print(head);
    cout << "Length: " << getLength(head) << endl;

    insertAtTail(head, tail, 22);
    print(head);

    insertAtHead(head, tail, 17);
    print(head);

    insertAtPosition(head, tail, 4, 19);
    print(head);

    insertAtPosition(head, tail, 1, 0);
    print(head);

    insertAtPosition(head, tail, 6, 25);
    print(head);

    deleteNode(head, tail, 1);
    print(head);

    deleteNode(head, tail, 3);
    print(head);

    deleteNode(head, tail, 4);
    print(head);
    
    return 0;
}