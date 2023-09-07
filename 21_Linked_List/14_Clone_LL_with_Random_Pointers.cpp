#include <iostream>
#include <unordered_map>
#include "_Singly_Linked_List_Boiler_Plate.cpp"
using namespace std;

//* Clone a Linked List with Random Pointers

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
        this -> random = NULL;
    }
};

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

//? Method 1 -> Using Mapping
Node* copyList1(Node* head) {
    //step1 -> create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;

    while(temp != NULL) {
        insertAtTail1(cloneHead, cloneTail, temp -> data);
        temp = temp -> next;
    }

    //step2 -> create a map
    unordered_map<Node*, Node*> oldToNewNode;

    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode != NULL) {
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next;
    }

    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL) {
        // mapping of random
        cloneNode -> random = oldToNewNode[originalNode -> random];

        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next;
    }
    return cloneHead;
}

//? Method 2 -> T.C = O(n), S.C = O(1)
Node* copyList2(Node* head) {
    //step1 -> create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;

    while(temp != NULL) {
        insertAtTail1(cloneHead, cloneTail, temp -> data);
        temp = temp -> next;
    }

    //step2 -> add cloneNodes in between original nodes
    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL) {
        Node* next = originalNode -> next;
        originalNode -> next = cloneNode;
        originalNode = next;

        next = cloneNode -> next;
        cloneNode -> next = originalNode;
        cloneNode = next;
    }

    //step3 -> copy random pointer
    Node* curr = head;

    while(curr != NULL) {
        if (curr -> next != NULL) {
            curr -> next -> random = curr -> random ? curr -> random -> next : curr -> random;
        }
        curr = curr -> next -> next;
    }

    //step4 -> revert changes done in step 2
    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL) {
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode -> next;

        if (originalNode != NULL) {
        cloneNode -> next = originalNode -> next;
        }
        cloneNode = cloneNode -> next;
    }

    //step5 -> return ans
    return cloneHead;
}

int main()
{
    
    
    return 0;
}