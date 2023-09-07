#include <iostream>
#include <map>
#include "_Singly_Linked_List_Boiler_Plate.cpp"
using namespace std;

//* Detect Loop/Cycle is present in the Linked List
//? Method 1 -> using map to store visited nodes => T.C = O(n), S.C = O(n)
bool detectLoop(Node* head) {

    if (head == NULL) {
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL) {
        // cycle/loop is there
        if(visited[temp] == true) {
            //* This gives the Starting point of the loop
            cout << "Loop present at element: " << temp -> data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

//? Method 2 -> Floyd's Cycle Detection Algorithm -> using slow(1 step) and fast(2 steps) pointers => T.C = O(n), S.C = O(1)
Node* floydDetectLoop(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL) {
        fast = fast -> next -> next;
        
        slow = slow -> next;

        // loop is present
        if (slow == fast) {
            return slow;
        }
    }
    return NULL;
}

//* Getting starting point using this method
Node* getStartingNode(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    if (intersection == NULL) {
        return NULL;
    }
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

//* Remove Cycle/Loop from the Linked List
void removeLoop(Node* head) {
    if (head == NULL) {
        return;
    }
    
    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    }

    temp -> next = NULL;
}

int main()
{
    Node* node1 = new Node(2);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 5);
    insertAtHead(head, 15);
    insertAtHead(head, 13);
    insertAtTail(tail, 17);
    tail -> next = head -> next -> next; // making loop in Linked List
    
    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;
    // print(head);
    // printing the linked list with loop will print infinite elements

    if (detectLoop(head)) {
        cout << "Loop is present" << endl;
    }
    else {
        cout << "Loop is Not present" << endl;
    }

    if (floydDetectLoop(head)) {
        cout << "Loop is present" << endl;
    }
    else {
        cout << "Loop is Not present" << endl;
    }

    cout << "Starting point of loop: " << getStartingNode(head) -> data << endl;

    removeLoop(head);
    print(head);
    if (floydDetectLoop(head)) {
        cout << "Loop is present" << endl;
    }
    else {
        cout << "Loop is Not present" << endl;
    }
    
    return 0;
}